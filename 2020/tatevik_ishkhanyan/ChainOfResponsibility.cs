using System;

namespace ChainOfResponsibility
{
    class Program
    {
        static void Main(string[] args)
        {
            Receiver receiver = new Receiver(false, true, true);
             
            PaymentHandler bankPaymentHandler = new BankPaymentHandler();
            PaymentHandler moneyPaymentHadler = new MoneyPaymentHandler();
            PaymentHandler paypalPaymentHandler = new PayPalPaymentHandler();
            bankPaymentHandler.Successor = paypalPaymentHandler;
            paypalPaymentHandler.Successor = moneyPaymentHadler;
     
            bankPaymentHandler.Handle(receiver);
     
            Console.Read();
        }
    }
     
    class Receiver
    {
        // bank transfers
        public bool BankTransfer { get; set; }
        // money transfers - WesternUnion, Unistream
        public bool MoneyTransfer { get; set; }
        // transfer with PayPal
        public bool PayPalTransfer { get; set; }
        public Receiver(bool bt, bool mt, bool ppt)
        {
            BankTransfer = bt;
            MoneyTransfer = mt;
            PayPalTransfer = ppt;
        }
    }
    abstract class PaymentHandler
    {
        public PaymentHandler Successor { get; set; }
        public abstract void Handle(Receiver receiver);
    }
     
    class BankPaymentHandler : PaymentHandler
    {
        public override void Handle(Receiver receiver)
        {
            if (receiver.BankTransfer == true)
                Console.WriteLine("Making a bank transfer");
            else if (Successor != null)
                Successor.Handle(receiver);
        }
    }
     
    class PayPalPaymentHandler : PaymentHandler
    {
        public override void Handle(Receiver receiver)
        {
            if (receiver.PayPalTransfer == true)
                Console.WriteLine("Making transfer with  PayPal");
            else if (Successor != null)
                Successor.Handle(receiver);
        }
    }
    
    class MoneyPaymentHandler : PaymentHandler
    {
        public override void Handle(Receiver receiver)
        {
            if (receiver.MoneyTransfer == true)
                Console.WriteLine("Making transfers with money transfer systems");
            else if (Successor != null)
                Successor.Handle(receiver);
        }
    }
}
