#include <stdio.h>

int main()
{
    int a[87] ,entry,b ,i;
    for(i=1;i<86;i++)
    {
        a[i]=0;
    }
    while(1)
    {
        printf("enter 1 for parking or 2 to exit\n");
        scanf("%d", &entry);
        printf("Enter the last 4 digits of car number\n");
        scanf("%d",&b);
        switch (entry)
        {
        case 1:

            for(i=1;i<86;i++)
            {
                if(a[i]==0)
                {
                    a[i]=b;
                    printf("lane number is %d\n",i);
                    break;
                }
                else if(i==86)
                        printf("Parking lanes filled\n");
           }
            break;
       case 2:

           for(i=1;i<86;i++)
           {
               if(a[i]==b)
                  {
                   printf("lane number is %d \n", i);
                   a[i]=0;
                  }


           }
        default:
            printf("Invalid entry");
        }



     }
}

