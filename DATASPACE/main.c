#include <stdio.h>

int main()
{
    printf("minimum signed char %d\n",-(char)((unsigned char)~0>>1)-1);
    printf("maximum signed char %d\n",(char)((unsigned char)~0>>1));

    printf("minimum signed short %d\n",-(short)((unsigned short)~0>>1)-1);
    printf("maximum signed short %d\n",(short)((unsigned short)~0>>1));

    printf("minimum signed int %d\n",-(int)((unsigned int)~0>>1)-1);
    printf("maximum signed int %d\n",(int)((unsigned int)~0>>1));

    printf("minimum signed long %ld\n",-(long)((unsigned long)~0>>1)-1);
    printf("maximum signed long %ld\n",(long)((unsigned long)~0>>1));

    printf("maximum unsigned char %d\n",(unsigned char)~0);
    printf("maximum unsigned short %d\n",(unsigned short)~0);
    printf("maximum unsigned int %d\n",(unsigned int)~0);
    printf("maximum unsigned long %ld\n",(unsigned long)~0);
}
