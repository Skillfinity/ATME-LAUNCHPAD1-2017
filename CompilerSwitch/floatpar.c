#include "floatpar.h"
#ifdef FLOATPAR_H

float add(float a,float b)
{
    return a+b;
}

float subtract(float a,float b)
{
    float diff = 0.0;
    if(a >= b)
        diff = a-b;
    else
        diff = b-a;
    return diff;
}
#endif
