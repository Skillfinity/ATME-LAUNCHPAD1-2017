#include <stdio.h>
int main()
{
    int a[100],i,b[100];
    printf("welcome\n");
    for (i=1;i<=3;i++)
    {
        scanf("%d %d",&a[i],&b[i]);

    }
     printf("prknum\t carnum\t time\n");
    for (i=1;i<=3;i++)
    {

        printf("%d\t %d\t %d\n",i,a[i],b[i]);
    }

return 0;
}
