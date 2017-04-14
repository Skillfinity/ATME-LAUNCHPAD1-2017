#include <stdio.h>
#include "switch.h"

#ifdef INTPAR
#include "intpar.h"
#else
#include "floatpar.h"
#endif

int main()
{
    printf("This will always compile and print at the beginning\n");
#ifdef INTPAR
    int num1;
    int num2;
    printf("input the 1st integer to add and subtract");
    scanf("%d",&num1);
    printf("input the 2nd integer to add and subtract");
    scanf("%d",&num2);
    printf("Addition of integer values = %d",add(num1,num2));
    printf("Difference of integer values = %d",subtract(num1,num2));
#else
    float num1;
    float num2;
    printf("input the 1st float to add and subtract");
    scanf("%f",&num1);
    printf("input the 2nd float to add and subtract");
    scanf("%f",&num2);
    printf("Addition of float values = %f",add(num1,num2));
    printf("Difference of float values = %f",subtract(num1,num2));
#endif
    printf("This will always compile and print at the end\n");
    return 0;
}
