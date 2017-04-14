#include <stdio.h>

int main()
{
    int x,i,j,prime;

    printf("Enter the limit:");
    scanf("%d",&x);

    for(i = 2; i <= x ; i++)
    {
        prime=1;
        for(j = 2; j <= i/2; j++)
        {
            if(i%j == 0)
            {
                prime=0;
                break;
            }
        }
        if(prime == 1)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}
