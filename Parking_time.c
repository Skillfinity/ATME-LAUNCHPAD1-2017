#include <stdio.h>

int main()
{
  int a,b,c,d,car,x,y,temp,k,m,min,hr,sep;
  int space[85]={0};
  int carno[85]={0};
  int i=0;
 while(1)
 {
  printf("\nEnter the car number:\t");
  scanf("%d",&car);
  printf("\nEnter the time(Time format 24hr-Hour:minute) :\t"); //Example 10:30,14:28
  scanf("%d:%d",&a,&b);


      c=a*100;
      d=c+b;
      space[i]=d;
      carno[i]=car;
      if(i==84)
      {
          printf("No space is empty for parking\n");
          break;
      }

      i=i+1;


          for(x=0;x<85;x++)
          {
              for(y=0;y<84;y++)
              {
                  if(space[y+1]<space[y])
                  {
                      temp=space[y];
                      space[y]=space[y+1];
                      space[y+1]=temp;
                      temp=carno[y];
                      carno[y]=carno[y+1];
                      carno[y+1]=temp;

                  }
              }
          }
        k=0;
      while(space[k]==0)
      {
       k=k+1;
      }
               printf("\n\n\t\tExit list of cars according to time of arrival\n");
               printf("\n\t\t\tCar number\tArrival Time\n");

              for(m=k;m<85;m++)
              {
                  sep=space[m];
                  min=sep%100;
                  hr=sep-min;
                  hr=hr/100;
                  printf("\t\t\t%d\t\t%d:%d\n",carno[m],hr,min);
              }





}


    return 0;
}

