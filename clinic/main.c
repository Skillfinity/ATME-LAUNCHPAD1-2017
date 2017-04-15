#include <stdio.h>

int main()
{    
    int d=4 ,p=3, option=0;
    while(option != 5)
   {
    printf("Enter a number\n");
    scanf("%d", &option);

    if(p==3 && d==4)
    {
        if(option==1)
        {
            printf("Doctor is in\n");
            d=option;
        }
        else if(option==2)
            printf("No doctor please wait\n");

        else
            printf("Invalid Entry\n");
    }

   else if(p==3 && d==1)
    {
        if(option==2)
        {
            printf("Patioet is in\n");
            p=option;
        }
        else if(option==4)
           {

            printf("Doctor is out\n");
            d=option;
           }
        else
            printf("Invalid Entry\n");
    }

   else if(p==2 && d==4)
    {
        if(option==1)
        {
            printf("Doctor is in\n");
            d=option;
        }
        else if(option==2)
            printf("clinic engaged please wait\n");
        else if(option==3)
           {
            printf("Paionent out\n");
            p=option;
        }
        else
            printf("Invalid Entry\n");
    }

   else if(p==2 && d==1)
    {
        if(option==2)

            printf("clinic engaged please wait out\n");

        else if(option==3)
        {
            printf("Pationt out\n");
            p=option;
        }
         else if(option==4)
        {
            printf("Doctor out pationt please wait out\n");
            d=option;
        }

        else
            printf("Invalid Entry\n");
    }


 }
}
