#include <stdio.h>
int main()
{
    int a[100],i,car_num,b=0;
    printf("welcome");
    for (i=1;i<=3;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the carnum to know the parking space num\n");
    scanf("%d",&car_num);
    for (i=1;i<=3;i++)
    {
         if(car_num==a[i])
         {
             printf("parking space num is %d\n",i);
             b++;
         }

    }
    if(b==0)
    {
        printf("car num %d not found in parking space\n",car_num);
    }
return 0;
}
