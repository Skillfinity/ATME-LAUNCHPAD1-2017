#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the the first integer values into x :");
    scanf("%d ",&x);

    printf("Enter the the second integer values into y :");
    scanf("%d ",&y);

    if(x>y)
        printf("x is greater than y \n");
    else if(x<y)
        printf("x is less than y \n");
    else
        printf("x is equal to y \n");
    return 0;
}
