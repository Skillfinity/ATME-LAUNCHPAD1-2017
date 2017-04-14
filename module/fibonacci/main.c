#include<stdio.h>

int main()
{
   int n, n1 = 0, n2 = 1, next, i;

   printf("Enter the number of terms\n");
   scanf("%d",&n);
printf("First %d terms of Fibonacci series are :\n",n);
   for ( i = 0; i < n;i++ )
   {
      if (i <= 1)
         next = i;
      else
      {
         next = n1 + n2;
         n1 = n2;
         n2 = next;
      }

      printf("%d\n",next);
   }

   return 0;
}
