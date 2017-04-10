#include <stdio.h>
#include<math.h>
int main()
{
    float length, breadth, area, perimeter, diagonal_length;
    printf("Enter the length of the rectangle \n");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle \n");
    scanf("%f",&breadth);

    area = length*breadth;
    perimeter = 2*(length+breadth);
    diagonal_length = sqrt(length*length + breadth*breadth);

    printf("The area of rectangle = %f \n",area);
    printf("The perimeter of rectangle = %f \n",perimeter);
    printf("The diagonal length of rectangle = %f  \n",diagonal_length);
    return 0;
}
