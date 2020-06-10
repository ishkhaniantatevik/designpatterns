using System;

namespace Bridge
{
    class Program
    {
        static void Main(string[] args)
        {
            // create a new programmer who is working with c++
            Programmer freelancer = new FreelanceProgrammer(new CPPLanguage());
            freelancer.DoWork();
            freelancer.EarnMoney();
            // received a new task , but now we need c#
            freelancer.Language = new CSharpLanguage();
            freelancer.DoWork();
            freelancer.EarnMoney();
     
            Console.Read();
        }
    }
     
    interface ILanguage
    {
        void Build();
        void Execute();
    }
     
    class CPPLanguage : ILanguage
    {
        public void Build()
        {
            Console.WriteLine("Via c++ compiler,we compile our program to binary code");
        }
     
        public void Execute()
        {
            Console.WriteLine("Run the program executable");
        }
    }
     
    class CSharpLanguage : ILanguage
    {
        public void Build()
        {
            Console.WriteLine("Via compiler Roslyn,we compile the source code to exe file");
        }
     
        public void Execute()
        {
            Console.WriteLine("JIT compiles the programm to binary code");
            Console.WriteLine("CLR executes compiles binary code");
        }
    }
     
    abstract class Programmer
    {
        protected ILanguage language;
        public ILanguage Language
        {
            set { language = value; }
        }
        public Programmer (ILanguage lang)
        {
            language = lang;
        }
        public virtual void DoWork()
        {
            language.Build();
            language.Execute();
        }
        public abstract void EarnMoney();
    }
     
    class FreelanceProgrammer : Programmer
    {
        public FreelanceProgrammer(ILanguage lang) : base(lang)
        {
        }
        public override void EarnMoney()
        {
            Console.WriteLine("Earn money from done task");
        }
    }
    class CorporateProgrammer : Programmer
    {
        public CorporateProgrammer(ILanguage lang)
            : base(lang)
        {
        }
        public override void EarnMoney()
        {
            Console.WriteLine("Earn money in the end of the month");
        }
    }
}