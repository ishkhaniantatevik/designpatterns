using System;

namespace adapter
{
    class Program
    {
        static void Main(string[] args)
        {
            // traveler
            Driver driver = new Driver();
            // car
            Auto auto = new Auto();
            // went on a trip
            driver.Travel(auto);
            // met sands,you should use camel
            Camel camel = new Camel();
            // use adapter
            ITransport camelTransport = new CamelToTransportAdapter(camel);
            // continue trip by camel
            driver.Travel(camelTransport);
 
            Console.Read();
        }
    }
    interface ITransport
    {
        void Drive();
    }
// car's interface
    class Auto : ITransport
    {
        public void Drive()
        {
            Console.WriteLine("Car rides on the road");
        }
    }
    class Driver
    {
        public void Travel(ITransport transport)
        {
            transport.Drive();
        }
    }
// interface of the animal
    interface IAnimal
    {
        void Move();
    }
// camel class
    class Camel : IAnimal
    {
        public void Move()
        {
            Console.WriteLine("Camel walks through the desert");
        }
    }
// Аdapter from camel to ITransport
    class CamelToTransportAdapter : ITransport
    {
        Camel camel;
        public CamelToTransportAdapter(Camel c)
        {
            camel = c;
        }
 
        public void Drive()
        {
            camel.Move();
        }
    }
}