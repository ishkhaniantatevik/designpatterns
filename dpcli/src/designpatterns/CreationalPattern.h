#ifndef CreationalPattern_H
#define CreationalPattern_H

#include "DesignPattern.h"

namespace DP
{

class CreationalPattern : public DesignPattern
{
public:
    virtual Type getType() const override
    {
        return DesignPattern::CREATIONAL;
    }
    
private:

}; // class CreationalPattern

} // namespace DP

#endif
