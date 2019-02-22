#ifndef Composite_H
#define Composite_H

#include "../StructuralPattern.h"

namespace DP
{

class Composite : public StructuralPattern
{
public:
    virtual Name getName() const override
    {
        return "Composite";
    }
    
    virtual Intent getIntent() const override
    {
        return "";
    }
    
    virtual Motivation getMotivation() const override
    {
        return "";
    }
    
    virtual Applicability getApplicability() const override
    {
        return "";
    }
    
    virtual Structure getStructure() const override
    {
        return "";
    }
    
    virtual Participants getParticipants() const override
    {
        return "";
    }
    
    virtual Collaborations getCollaborations() const override
    {
        return "";
    }
    
    virtual Consequences getConsequences() const override
    {
        return "";
    }
    
    virtual Implementation getImplementation() const override
    {
        return "";
    }
    
    virtual SampleCode getSampleCode() const override
    {
        return "";
    }
    
    virtual KnownUses getKnownUses() const override
    {
        return "";
    }
    
    virtual AlsoKnownAs getAlsoKnownAs() const override
    {
        return AlsoKnownAs();
    }
    
    virtual RelatedPatterns getRelatedPatterns() const override
    {
        return RelatedPatterns();
    }
    
}; // class Composite

} // namespace DP

#endif
