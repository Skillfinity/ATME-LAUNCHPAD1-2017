#include <stdio.h>
int    main()
{
    int i,b,c;
    int a[100];
    for(i=1;i<86;i++)
    {
        a[i]=0;
    }
    while(1)
    {
        printf("To park type 1 or to pick car press 2\n");
    scanf("%d",&b);
    if(b==1)
    {
        for(i=1;i<86;i++)
{
            if(a[i]==0)
            {
                printf("Enter the last 4 digit number of the car to park\n");
                scanf("%d",&a[i]);
                break ;
            }
            else if(i==85)
            {
                printf("parking lodge is full/n");
        }

         }
    }
    else
    {
        printf("Enter the last 4 digit number of the car to pick the car\n");
        scanf("%d",&c);
                for(i=1;i<86;i++)
                {
                    if(a[i]==c)
                        printf("car is parked in the number %d\n",i);
                    a[i]=0;
                }
    }

    }

    return 0;


}

