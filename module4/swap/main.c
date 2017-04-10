#include<stdio.h>
int main()
{
    int a= -5;
    int b=25;
    a= a+b;
    b=a-b;
    a=a-b;

    printf("a=%d and b=%d", a,b);
    return 0;
}
