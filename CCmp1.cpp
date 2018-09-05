#include "CCmp1.hpp"
#include <cmath>

ICmp* CCmp1::Do_Clone()const{
    return new CCmp1(*this);
}

bool CCmp1::Do_Compare(float a, float b)const{
    float distA=std::fabs(a-fixed_value);
    float distB=std::fabs(b-fixed_value);
    return distA<distB;
};
CCmp1::CCmp1(float fixed_value){
    this->fixed_value=fixed_value;
}
