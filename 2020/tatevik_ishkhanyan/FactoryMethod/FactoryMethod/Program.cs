using System;

namespace FactoryMethod
{
    class Program
    {
        static void Main(string[] args)
        {
            VirusInfecting corona = new CoronaInfecting();
            corona.Infection();
            VirusInfecting ebola = new EbolaInfecting();
            ebola.Infection();
            VirusInfecting blackPlague = new BlackPlagueInfecting();
            blackPlague.Infection();
                
        }
    }
}/Users/tatevikishkhanyan/RiderProjects/FactoryMethod/FactoryMethod.sln