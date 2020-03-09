using System;

namespace FactoryMethod
{
    public abstract class VirusInfecting
    {
        public void Infection()
        {
            Virus v = SpreadVirus();
            
            Console.WriteLine("SPREADING");
            v.GetInfected();
            

        }


        public abstract Virus SpreadVirus();
    }
}