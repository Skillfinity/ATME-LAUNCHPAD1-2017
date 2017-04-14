#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter the 1st number:");
   scanf("%d",&a);
   printf("Enter the 2nd number:");
   scanf("%d",&b);
   if(a==b)
   {
       printf("\nBoth the numbers are equal");
   }
   else if(a>b)
   {
       printf("\n %d is greater than %d",a,b);
   }
   else
   {
       printf("\n %d is less than %d",a,b);
   }

    return 0;
}
