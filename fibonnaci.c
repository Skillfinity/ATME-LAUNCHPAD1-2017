#include <stdio.h>

int main()
{
    int t1=0,t2=1,nextnum=0,x;

    printf("Enter the limit:");
    scanf("%d",&x);

    printf("%d,",t1);
    printf("%d,",t2);
    nextnum = t1 + t2;

    while(nextnum <= x)
    {
        printf("%d,",nextnum);
        t1 = t2;
        t2 = nextnum;
        nextnum = t1 + t2;
    }

    return 0;
}
