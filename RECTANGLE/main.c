#include <stdio.h>
#include<math.h>
int main()
{
    int l,b,area,perimeter,diagonal;
    printf("enter length and breadth of a rectangle\n");
    scanf("%d %d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    diagonal=sqrt((l*l)+(b*b));
    printf("area of rectangle=%d\n perimeter of rectangle=%d\n length of diagonal=%d\n",area,perimeter,diagonal);

    return 0;
}
