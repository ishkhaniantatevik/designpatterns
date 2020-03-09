namespace FactoryMethod
{
    public class BlackPlagueInfecting : VirusInfecting
    {
        public override Virus SpreadVirus()
        {
            return new BlackPlague();
        }
    }
}