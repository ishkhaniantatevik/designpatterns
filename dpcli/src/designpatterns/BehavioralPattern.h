#ifndef BehavioralPattern_H
#define BehavioralPattern_H

#include "DesignPattern.h"

namespace DP
{

class BehavioralPattern : public DesignPattern
{
public:
    virtual Type getType() const override
    {
        return DesignPattern::BEHAVIORAL;
    }
    
private:

}; // class BehavioralPattern

} // namespace DP

#endif
