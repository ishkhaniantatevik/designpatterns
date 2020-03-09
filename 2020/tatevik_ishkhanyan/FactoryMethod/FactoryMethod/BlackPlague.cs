using System;

namespace FactoryMethod
{
    public class BlackPlague : Virus
    {
        public void Virus()
        {
            _type = "BLACKPLAGUE";
        }

        public override void GetInfected()
        {
            Console.WriteLine($"ATTENTION!!THERE MIGHT BE SPREADING OF{_type} VIRUS");
                
        }
    }
}