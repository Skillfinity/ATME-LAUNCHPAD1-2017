#include <stdio.h>

int main()
{
    int a[85]={0};
    int option,n;
    int car,space;
    int i,j=0,check;
    while(1)
    {
        printf("\n\n1.Incoming\n2.Outgoing\n3.Locate car number in space\n\n");
        scanf("%d",&option);
        switch(option)
        {



                    case 1: //Incoming cars
                        {
                            printf("\n\nEnter the last 4 digits of car number\n\n");
                            scanf("%d",&space);
                            i=0;
                            check=0;
                           while(check!=space)
                           {
                               check=space-a[i];
                               i=i+1;
                           }
                           a[i-1]=space;
                         break;
                        };

                    case 2: //Outgoing cars
                        {
                        j=0;
                        printf("\n\nEnter the last 4 digits of car number\n\n");
                        scanf("%d",&space);
                             while(n!=0)
                            {
                                n=space-a[j];
                                 j=j+1;
                            };
                            printf("\n\n%dth space now is empty\n\n",j);
                            a[j-1]=0;


                            break;
                        };
                    case 3://locate car number in the corresponding park space
                        {
                            printf("\n\nEnter the park space number\n\n");
                            scanf("%d",&car);
                            if(a[car-1]==0)
                            {
                                printf("\n\nSpace is empty\n\n");
                            }
                            else
                            {
                            printf("\n\ncar number %d is in %d space\n\n",a[car-1],car);
                            }
                            break;
                        };



        };//switch end
   }; //while end

    return 0;
}
