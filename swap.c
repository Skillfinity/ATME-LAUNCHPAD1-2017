#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of A\n");
    scanf("%d",&a);
    printf("\nEnter the value of B \n");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n The values of A & B after swapping are %d & %d",a,b);
    return 0;
}
