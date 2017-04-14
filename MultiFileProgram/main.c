#include <stdio.h>
#include "compute.h"

int main()
{
    int a;
    int b;
    printf("Enter the 2 numbers to operate on");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Sum of 2 numbers is: %d",add(a,b));
    printf("Difference of 2 numbers is: %d",subtract(a,b));
    printf("Product of 2 numbers is: %d",multiply(a,b));
    printf("Quotient of 2 numbers is: %d",divide(a,b));
    return 0;
}
