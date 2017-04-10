#include <stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the two numbers to be compared\n");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("\nX=%d is greater than Y=%d\n\n",num1,num2);
    }
    else if(num1<num2)
    {
        printf("\nX=%d is less than Y=%d\n\n",num1,num2);
    }
    else
    {
        printf("\nX=%d is equal to Y=%d\n\n",num1,num2);
    }
    return 0;
}
