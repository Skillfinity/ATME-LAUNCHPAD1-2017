#include <stdio.h>
#define a 0x1
#define s 0x2
#define m 0x3
#define d 0x4

int main()
{
    int x,y;
    int sum, difference, product, remainder;

    float quotient;
    char operation;

    printf("Enter the first integer :");
    scanf("%d", &x);
    printf("Enter the second integer : ");
    scanf("%d",&y);

    printf("enter the operation to be performed \n");
    printf("type a for addition, s for subtraction,m for multiplication,and d for division");
    scanf("%c",&operation);

    switch(operation)
    {
    case a:
        sum = x + y;
        printf("The sum is=%d",sum);
        break;
    case s:
        difference = x - y;
        printf("The difference is=%d",difference);
        break;
    case m:
        product = x * y;
        printf("The product is=%d",product);
        break;
    case d:
        quotient = x / y;
        printf("The quotient is=%f",quotient);
        remainder= x%y;
        printf("The remainder is=%d",remainder);

        break;
    default:
        printf("Invalid entry");
        break;

    }

    return 0;
}
