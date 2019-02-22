#ifndef DesignPattern_H
#define DesignPattern_H

#include <iostream>
#include <string>
#include <map>
#include <set>

namespace DP {

class DesignPattern
{
    typedef std::string Text;
public:
    typedef Text Name;
    typedef Text Intent;
    typedef Text Motivation;
    typedef Text Applicability;
    typedef Text Structure;
    typedef Text Participants;
    typedef Text Collaborations;
    typedef Text Consequences;
    typedef Text Implementation;
    typedef Text SampleCode;
    typedef Text KnownUses;
    typedef std::set<Name> AlsoKnownAs;
    typedef std::map<Name, Text> RelatedPatterns;

public:
    virtual ~DesignPattern() {}

    void print()
    {
        std::cout << "Base Design Pattern" << std::endl;
    }

private:

}; // class DesignPattern

} // namespace DP

#endif
