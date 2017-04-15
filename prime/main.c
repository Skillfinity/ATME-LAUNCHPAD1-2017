#include <stdio.h>

int main()
{
   int i, num, j;
   int flag = 1;

   printf("Enter the number :");
   scanf("%d",&num);
   for(j=2 ;j<=num ;j++)
   {

   for(i = 2; i < j; i++)
   {
      if((j % i) == 0)
      {
         flag = 0;
         break;

      }
      else
          flag = 1;
   }

   if (flag == 1)
      printf("%d is prime number.\n", j);


   }
   return 0;
}
