namespace FactoryMethod
{
    public class EbolaInfecting : VirusInfecting
    {
        public override Virus SpreadVirus()
        {
            return new Ebola();
        }
    }
}