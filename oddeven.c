#include <stdio.h>

int main()
{
    int x;
    int i;
    printf("Enter the limit:");
    scanf("%d",&x);
    for(i = 0; i <= x; i++)
    {
        if((i % 2) == 0)
        {
                continue;

        }
        printf("\n%d",i);
    }
    return 0;
}
