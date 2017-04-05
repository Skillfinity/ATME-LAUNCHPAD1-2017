#include<stdio.h>
int main()
{
    float per;
    printf("enter your percentage\n");
    scanf("%f",&per);
    if(per>=85 && per<100)
    {
        printf("distinction\n");
    }
    else if(per>=60 && per<85)
    {
        printf("first class\n");
    }
    else if(per>=35 && per<60)
    {
        printf("seconf class\n");

    }
    else
    {
        printf("fail\n");
    }
    return 0;
}
