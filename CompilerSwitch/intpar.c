#include "intpar.h"
#ifdef INTPAR_H

int add(int a,int b)
{
    return a+b;
}

int subtract(int a,int b)
{
    int diff = 0.0;
    if(a >= b)
        diff = a-b;
    else
        diff = b-a;
    return diff;
}
#endif
