#include <stdio.h>

int main()
{
    int x,y;
    char ch;

    printf("Enter the 1st number:\n");
    scanf("%d",&x);
    printf("\nEnter the 2nd number:\n");
    scanf("%d",&y);

    printf("\nEnter the operation to be performed\n");
    printf("\n A-addition");
    printf("\n S-subtraction");
    printf("\n M-multiplication");
    printf("\n D-division\n");
    scanf("%c",&ch);

while(1)
{
    switch(ch)
    {
             case 'a' :
                        printf("\n The sum of the two numbers is %d",(x+y));
                        break;
             case 's' :
                        printf("\n The difference of the two numbers is %d",(x-y));
                        break;
             case 'm' :
                        printf("\n The product of the two numbers is %d",(x*y));
                        break;
             case 'd' :
                        printf("\n The quotient of the two numbers is %d",(x/y));
                        break;
             default  : printf("\n Error");
                        break;
    }
}

    return 0;
}
