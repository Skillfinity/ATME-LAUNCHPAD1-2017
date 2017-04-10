#include <stdio.h>

int main()
{
    int a[87] ,entry,b ,i ,j ,t[87] ,x;
    for(i=1;i<86;i++)
    {
        a[i]=0;
        t[i]=0;
    }
    while(1)
    {
        printf("enter 1 for parking or 2 to exit and 3 if film is over \n");
        scanf("%d", &entry);

        switch (entry)
        {
        case 1:
            printf("Enter the last 4 digits of car number\n");
            scanf("%d",&b);
            for(i=1;i<86;i++)
            {
                if(a[i]==0)
                {
                    a[i]=b;
                    printf("Enter the time \n");
                    scanf("%d",&t[i]);
                    printf("lane number is %d\n",i);

                    break;
                }
                else if(i==86)
                        printf("Parking lanes filled\n");
           }
            break;
       case 2:
            printf("Enter the last 4 digits of car number\n");
            scanf("%d",&b);
           for(i=1;i<86;i++)
           {
               if(a[i]==b)
                  {
                   printf("lane number is %d \n", i);
                   a[i]=0;
                  }


           }
            break;
       case 3:
            for (i = 0; i < 86; ++i)
                {
                    for (j = i + 1; j < 86; ++j)
                    {
                        if (t[i] > t[j])
                        {
                            x =  a[i];
                            a[i] = a[j];
                            a[j] = x;
                        }
                    }
                }

                for (i = 0; i < 86; ++i)
                    printf("car no is %d \t", a[i]);
               // printf("lane no %d \t",i);
               // printf("time %d \n",t[i]);
            }
        }



     }


