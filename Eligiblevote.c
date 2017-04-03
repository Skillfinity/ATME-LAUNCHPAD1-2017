#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("\nEligible to vote\n\n");
    }
    else
    {
        printf("\nNot eligible to vote\n\n");
    }
    return 0;
}
