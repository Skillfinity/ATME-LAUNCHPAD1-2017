#include <stdio.h>

int main()
{
    int a;
    printf("enter your age\n");
    scanf("%d",&a);
    if(a<18)// checks age
    {
        printf("you are not eligible for voting\n");

    }
    else
    {
        printf("welcome you can vote for ur candidate\n");
    }
    return 0;

}


