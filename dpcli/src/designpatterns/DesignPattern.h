#ifndef DesignPattern_H
#define DesignPattern_H

#include <iostream>
#include <string>
#include <map>
#include <set>

namespace DP
{

class DesignPattern
{
    typedef std::string Text;
    
public:
    enum Type
    {
        CREATIONAL,
        STRUCTURAL,
        BEHAVIORAL
    };
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
    virtual Name getName() const = 0;
    virtual Type getType() const = 0;
    virtual Intent getIntent() const = 0;
    virtual Motivation getMotivation() const = 0;
    virtual Applicability getApplicability() const = 0;
    virtual Structure getStructure() const = 0;
    virtual Participants getParticipants() const = 0;
    virtual Collaborations getCollaborations() const = 0;
    virtual Consequences getConsequences() const = 0;
    virtual Implementation getImplementation() const = 0;
    virtual SampleCode getSampleCode() const = 0;
    virtual KnownUses getKnownUses() const = 0;
    virtual AlsoKnownAs getAlsoKnownAs() const = 0;
    virtual RelatedPatterns getRelatedPatterns() const = 0;
    
    virtual ~DesignPattern() {}
    
    void print()
    {
        switch ( getType() )
        {
        case CREATIONAL:
            std::cout << "Creational Pattern: ";
            break;
            
        case STRUCTURAL:
            std::cout << "Structural Pattern: ";
            break;
            
        case BEHAVIORAL:
            std::cout << "Behavioral Pattern: ";
            break;
        }
        
        std::cout << getName() << std::endl;
    }
    
}; // class DesignPattern

} // namespace DP

#endif
