#include<stdio.h>
#include<string.h>

int main()
{
    int i,l=1,m=1,n=1,car_num,h[100],s[100],u[100];
   char category[100];
    printf("enter the car num and category\n");
    for(i=1;i<=6;i++)
    {
        scanf("%d %s",&car_num,category);
        if(!(strcmp(category,"hatchback")))
        {
            h[l++]=car_num;
        }
        else if(!(strcmp(category,"sedane")))
        {
            s[m++]=car_num;
        }
        else if(!(strcmp(category,"suv")))
        {
            u[n++]=car_num;
        }
    }
    printf("total numbeer of cars of hatchback insurance company\n");
    printf("%d\n",(l-1));
    for(i=1;i<l;i++)
    {
        printf("%d\n",h[i]);
    }
    printf("total numbeer of cars of sedane insurance company\n");
    printf("%d\n",(m-1));
    for(i=1;i<m;i++)
    {
        printf("%d\n",s[i]);
    }
    printf("total numbeer of cars of suv insurance company\n");
    printf("%d\n",(n-1));
    for(i=1;i<n;i++)
    {
        printf("%d\n",u[i]);
    }
    return 0;
}
