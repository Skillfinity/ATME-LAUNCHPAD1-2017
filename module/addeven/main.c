#include <stdio.h>

int main()
{
    int limit=0;
    int i;
    printf("Enter the limit : ");
    scanf("%d",&limit);

    printf("The odd numbers are:");

    for(i=0 ;i <= limit ; i++ )
    {
        if((i % 2) == 0)
        {
            continue;
        }
        printf("%d , ", i);
    }
    return 0;
}
