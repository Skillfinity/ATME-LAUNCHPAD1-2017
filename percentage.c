#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the percentage obtained by the student:\n");
    scanf("%d",&marks);
    if(marks >= 70)
    {
        printf("\nThe student secured distinction");

    }
    else if((marks < 70) && (marks >= 60))
    {
        printf("\n The student secured First class");
    }
    else if((marks < 60) && (marks >= 35))
    {
        printf("\n The student secured second class");
    }
    else
    {
        printf("\nThe student is failed");
    }
    return 0;
}
