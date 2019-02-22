#ifndef GOFPatterns_H
#define GOFPatterns_H

// Base Design Pattern Class
#include "DesignPattern.h"

// Creational Patterns
#include "creational/AbstractFactory.h"
#include "creational/Builder.h"
#include "creational/FactoryMethod.h"
#include "creational/Prototype.h"
#include "creational/Singleton.h"

// Structural Patterns
#include "structural/Adapter.h"
#include "structural/Bridge.h"
#include "structural/Composite.h"
#include "structural/Decorator.h"
#include "structural/Facade.h"
#include "structural/Flyweight.h"
#include "structural/Proxy.h"

// Behavioral Patterns
#include "behavioral/ChainOfResponsibility.h"
#include "behavioral/Command.h"
#include "behavioral/Interpreter.h"
#include "behavioral/Iterator.h"
#include "behavioral/Mediator.h"
#include "behavioral/Memento.h"
#include "behavioral/Observer.h"
#include "behavioral/State.h"
#include "behavioral/Strategy.h"
#include "behavioral/TemplateMethod.h"
#include "behavioral/Visitor.h"

// Standard Library Headers
#include <vector>

namespace DP
{

class GOFPatterns
{
public:
    GOFPatterns()
    {
        // Creational Patterns
        patterns_.push_back( new AbstractFactory() );
        patterns_.push_back( new Builder() );
        patterns_.push_back( new FactoryMethod() );
        patterns_.push_back( new Prototype() );
        patterns_.push_back( new Singleton() );
        
        // Structural Patterns
        patterns_.push_back( new Adapter() );
        patterns_.push_back( new Bridge() );
        patterns_.push_back( new Composite() );
        patterns_.push_back( new Decorator() );
        patterns_.push_back( new Facade() );
        patterns_.push_back( new Flyweight() );
        patterns_.push_back( new Proxy() );
        
        // Behavioral Patterns
        patterns_.push_back( new ChainOfResponsibility() );
        patterns_.push_back( new Command() );
        patterns_.push_back( new Interpreter() );
        patterns_.push_back( new Iterator() );
        patterns_.push_back( new Mediator() );
        patterns_.push_back( new Memento() );
        patterns_.push_back( new Observer() );
        patterns_.push_back( new State() );
        patterns_.push_back( new Strategy() );
        patterns_.push_back( new TemplateMethod() );
        patterns_.push_back( new Visitor() );
    }
    
    ~GOFPatterns()
    {
        for ( auto* pattern : patterns_ )
        {
            delete pattern;
        }
    }
    
    void printAll()
    {
        for ( auto* pattern : patterns_ )
        {
            pattern->print();
        }
    }
    
private:
    std::vector<DesignPattern*> patterns_;
    
}; // class GOFPatterns

} // namespace DP

#endif
