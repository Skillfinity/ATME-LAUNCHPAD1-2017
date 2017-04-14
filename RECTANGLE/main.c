#include <stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("enter the value for length and breadth\n");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    printf("area of rectangle:%0.2f\n",area);
    perimeter=2*(length+breadth);
    printf("perimeter of rectangle:%0.2f\n",perimeter);
    return 0;
}
