using System;

namespace FactoryMethod
{
    public class Ebola : Virus
    {
        public void Virus()
        {
            _type = "EBOLA";
        }

        public override void GetInfected()
        {
            Console.WriteLine($"ATTENTION!!THERE MIGHT BE SPREADING OF{_type} VIRUS");
                
        }
    }
}