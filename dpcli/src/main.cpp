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
    std::vector<DesignPattern*> patterns;

    patterns.push_back(new AbstractFactory());
    patterns.push_back(new Builder());
    patterns.push_back(new FactoryMethod());
    patterns.push_back(new Prototype());
    patterns.push_back(new Singleton());

    patterns.push_back(new Adapter());
    patterns.push_back(new Bridge());
    patterns.push_back(new Composite());
    patterns.push_back(new Decorator());
    patterns.push_back(new Facade());
    patterns.push_back(new Flyweight());
    patterns.push_back(new Proxy());

    for ( auto* pattern : patterns )
    {
        pattern->print();
    }
    
    return 0;
}
