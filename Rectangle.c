#include <stdio.h>
#include<math.h>

int main()
{

    double Perimeter,Length,breadth,diagonal,area;
    while(1)
    {
    printf("Enter the Length\n");
    scanf("%lf",&Length);
    printf("\nEnter the Breadth\n");
    scanf("%lf",&breadth);
    area=Length*breadth;
    Perimeter=2*(Length+breadth);
    diagonal=sqrt((Length*Length)+(breadth*breadth));
    printf("\t\tArea=%lf\n\t\tPerimeter=%lf\n\t\tDiagonal length=%lf\n\n",area,Perimeter,diagonal);
    }

    return 0;
}
