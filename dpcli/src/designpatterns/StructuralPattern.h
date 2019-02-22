#ifndef StructuralPattern_H
#define StructuralPattern_H

#include "DesignPattern.h"

namespace DP
{

class StructuralPattern : public DesignPattern
{
public:
    virtual Type getType() const override
    {
        return DesignPattern::STRUCTURAL;
    }
    
private:

}; // class StructuralPattern

} // namespace DP

#endif
