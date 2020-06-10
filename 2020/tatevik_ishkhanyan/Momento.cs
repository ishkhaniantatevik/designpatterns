using System;
using System.Collections.Generic;

namespace Momento
{
   class Program
   {
       static void Main(string[] args)
       {
           Hero hero = new Hero();
           hero.Shoot(); // shooting,9 patrons remaining
           GameHistory game = new GameHistory();
                
           game.History.Push(hero.SaveState()); // saving a game
    
           hero.Shoot(); //shooting,8 patrons remaining
    
           hero.RestoreState(game.History.Pop());
    
           hero.Shoot(); //shooting,8 patrons remaining
    
           Console.Read();
       }
   }
    
   // Originator
   class Hero
   {
       private int patrons = 10; // patrons count
       private int lives = 5; // lives count
    
       public void Shoot()
       {
           if (patrons > 0)
           {
               patrons--;
               Console.WriteLine("Shooting. {0} patrons remaining", patrons);
           }
           else
               Console.WriteLine("No more patrons");
       }
       // saving a state
       public HeroMemento SaveState()
       {
           Console.WriteLine("Saving a game.parametrs: {0} patrons, {1} lives", patrons, lives);
           return new HeroMemento(patrons, lives);
       }
    
       // restoring a state
       public void RestoreState(HeroMemento memento)
       {
           this.patrons=memento.Patrons;
           this.lives = memento.Lives;
           Console.WriteLine("Restoring a game. parametrs: {0} patrons, {1} lives", patrons, lives);
       }
   }
   // Memento
   class HeroMemento
   {
       public int Patrons { get; private set; }
       public int Lives { get; private set; }
    
       public HeroMemento(int patrons, int lives)
       {
           this.Patrons = patrons;
           this.Lives = lives;
       }
   } 
      
   // Caretaker
   class GameHistory
   {
       public Stack<HeroMemento> History { get; private set; }
       public GameHistory()
       {
           History = new Stack<HeroMemento>();
       }
   }
}
