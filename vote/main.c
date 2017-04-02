#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age\n");
    scanf("%d",&a);
    if(a<18)
    {
        printf("Not Eligible to vote\n");
    }
    else
    {
        printf("Eligible to vote\n");
    }

    return 0;
}
