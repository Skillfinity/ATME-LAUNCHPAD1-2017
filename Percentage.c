#include <stdio.h>

int main()
{
    int Percentage;
    while(1)
    {
    printf("Enter the Percentage\n\n");
    scanf("%d",&Percentage);
    if(Percentage>=70)
    {
        printf("\nDistinction\n\n");
    }
    else if(Percentage>=60 && Percentage<75)
    {
        printf("\nFirst class\n\n");
    }
    else if(Percentage>=50 && Percentage<60)
    {
        printf("\nSecond class\n\n");
    }
    else
    {
        printf("\nFail\n\n");
    }
}
    return 0;
}
