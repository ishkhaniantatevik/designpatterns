// Base Design Pattern Class
#include "designpatterns/DesignPattern.h"

// Creational Patterns
#include "designpatterns/creational/AbstractFactory.h"
#include "designpatterns/creational/Builder.h"
#include "designpatterns/creational/FactoryMethod.h"
#include "designpatterns/creational/Prototype.h"
#include "designpatterns/creational/Singleton.h"

// Structural Patterns
#include "designpatterns/structural/Adapter.h"
#include "designpatterns/structural/Bridge.h"
#include "designpatterns/structural/Composite.h"
#include "designpatterns/structural/Decorator.h"
#include "designpatterns/structural/Facade.h"
#include "designpatterns/structural/Flyweight.h"
#include "designpatterns/structural/Proxy.h"

// Behavioral Patterns
#include "designpatterns/behavioral/ChainOfResponsibility.h"
#include "designpatterns/behavioral/Command.h"
#include "designpatterns/behavioral/Interpreter.h"
#include "designpatterns/behavioral/Iterator.h"
#include "designpatterns/behavioral/Mediator.h"
#include "designpatterns/behavioral/Memento.h"
#include "designpatterns/behavioral/Observer.h"
#include "designpatterns/behavioral/State.h"
#include "designpatterns/behavioral/Strategy.h"
#include "designpatterns/behavioral/TemplateMethod.h"
#include "designpatterns/behavioral/Visitor.h"

// Standard Library Headers
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>

int main()
{
    std::vector<DP::DesignPattern*> patterns;

    patterns.push_back(new DP::AbstractFactory());
    patterns.push_back(new DP::Builder());
    patterns.push_back(new DP::FactoryMethod());
    patterns.push_back(new DP::Prototype());
    patterns.push_back(new DP::Singleton());

    patterns.push_back(new DP::Adapter());
    patterns.push_back(new DP::Bridge());
    patterns.push_back(new DP::Composite());
    patterns.push_back(new DP::Decorator());
    patterns.push_back(new DP::Facade());
    patterns.push_back(new DP::Flyweight());
    patterns.push_back(new DP::Proxy());

    patterns.push_back(new DP::ChainOfResponsibility());
    patterns.push_back(new DP::Command());
    patterns.push_back(new DP::Interpreter());
    patterns.push_back(new DP::Iterator());
    patterns.push_back(new DP::Mediator());
    patterns.push_back(new DP::Memento());
    patterns.push_back(new DP::Observer());
    patterns.push_back(new DP::State());
    patterns.push_back(new DP::Strategy());
    patterns.push_back(new DP::TemplateMethod());
    patterns.push_back(new DP::Visitor());

    for ( auto* pattern : patterns )
    {
        pattern->print();
    }
    
    return 0;
}
