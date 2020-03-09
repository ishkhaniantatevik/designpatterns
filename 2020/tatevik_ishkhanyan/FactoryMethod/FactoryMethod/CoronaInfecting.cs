namespace FactoryMethod
{
    public class CoronaInfecting : VirusInfecting
    {
        public override Virus SpreadVirus()
        {
             return new Corona();
        }
    }
}