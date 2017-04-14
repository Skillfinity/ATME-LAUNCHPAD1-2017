#include <stdio.h>
#include <math.h>

int main()
{
    int l,w,a,p,d;
    printf("Enter the length of the rectangle:\n");
    scanf("%d",&l);
    printf("\nEnter the width of the rectangle:\n");
    scanf("%d",&w);

    a = (l * w);
    p =2*(l + w);
    d = sqrt((l*l)+(w*w));

    printf("\nThe area of the rectangle is %d",a);
    printf("\nThe perimeter of the rectangle is %d",p);
    printf("\nThe length of the diagonal of the rectangle is %d",d);
    return 0;
}
