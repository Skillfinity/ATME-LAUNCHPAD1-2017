#include <stdio.h>
void main()
{
    int p1,p2,p3,p4,p5,p6,total;
    float avg;
    printf("enter the marks\n");
    scanf("%d%d%d%d%d%d",&p1,&p2,&p3,&p4,&p5,&p6);
    total=p1+p2+p3+p4+p5+p6;
    avg = total/6;
    printf("paper1\t\t:%d\n",p1);
    printf("paper2\t\t:%d\n",p2);
    printf("paper3\t\t:%d\n",p3);
    printf("paper4\t\t:%d\n",p4);
    printf("paper5\t\t:%d\n",p5);
    printf("paper6\t\t:%d\n",p6);
    printf("total\t\t:%d\n",total);
    printf("avg\t\t:%d\n",avg);
    if(p1>=35&&p2>=35&&p3>=35&&p4>=35&&p5>=35&&p6>=35)
{
        printf("result\t\t:pass\n");
    }
    else
        printf("result \t\t:fail\n");
    if(avg>=85&&avg<100)
        printf("class\t\t:distinction\n");
    else if(avg>=60&&avg<85)
            printf("class\t\t:first class\n");
    else if(avg>=50&&avg<60)

     printf("class\t\t:second class\n");

     else if(avg>=35&&avg<50)

     printf("class\t\t:third class\n");
    else
        printf("class\t\t:better luck next time\n");
    getch();
}
