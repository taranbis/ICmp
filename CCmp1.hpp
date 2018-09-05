#pragma once
#include "ICmp.hpp"
class CCmp1:public ICmp{
public:
    ICmp* Do_Clone()const override;
    bool Do_Compare(float a, float b)const override;
private:
    float fixed_value;
public:
    CCmp1(float fixed_value);
};
