using System;

namespace FactoryMethod
{
    public class Corona : Virus
    {
        public void Virus()
        {
            _type = "CORONA";
        }

       public override void GetInfected()
        {
            Console.WriteLine($"ATTENTION!!THERE MIGHT BE SPREADING OF{_type} VIRUS");
                
        }
    }
}