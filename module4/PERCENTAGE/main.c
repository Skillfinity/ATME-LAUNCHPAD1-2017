#include <stdio.h>

int main()
{
    float marks;
    while(1)
    {
    printf("Enter tht marks in percentage : ");
    scanf("%f", &marks);

    if(marks>=70)
        printf("Good you have passed in distinction \n");
    else if(marks<70 &&  marks>=60)
        printf(" you have passed in 1st class \n");
    else if(marks<60 && marks>=40)
        printf(" you have passed in 2nd class \n");
    else
        printf("you have Failed \n");
    }
    return 0;
}
