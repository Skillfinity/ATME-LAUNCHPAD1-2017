#include <stdio.h>
void main()
{
    int a,b;

    printf("enter two values\n");
    scanf("%d %d",&a,&b);
    printf("a=%d\t b=%d:before swapping\n",a,b);
    a = a+b;
     b = a-b;
    a = a-b;
    printf("a=%d\t b=%d:after swapping\n",a,b);
    getch();
}
