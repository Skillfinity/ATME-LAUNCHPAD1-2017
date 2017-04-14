#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("INTEGERS\n");
    printf("\nNumber of bytes occupied by int is %d \n",sizeof(int));
    printf("Minimum value it can take is %d\n",INT_MIN);
    printf("Maximum value it can take is %d\n",INT_MAX);

    printf("\nNumber of bytes occupied by short is %d\n",sizeof(short));
    printf("Minimum value it can take is %d\n",SHRT_MIN);
    printf("Minimum value it can take is %d\n",SHRT_MAX);

    printf("\nNumber of bytes occupied by long is %d\n",sizeof(long));
    printf("Minimum value it can take is %ld\n",LONG_MIN);
    printf("Maximum value it can take is %ld\n",LONG_MAX);

    printf("\nNumber of bytes occupied by unsigned int is %d\n",sizeof(unsigned int));
    printf("Minimum value it can take is 0\n");
    printf("Maximum value it can take is %d\n",UINT_MAX);

    printf("\nNumber of bytes occupied by unsigned short is %d\n",sizeof(unsigned short));
    printf("Minimum value it can take is 0\n");
    printf("Maximum value it can take is %d\n",USHRT_MAX);


    printf("\nNumber of bytes occupied by  unsigned long is %d\n",sizeof(unsigned long));
    printf("Minimum value it can take is 0\n");
    printf("Maximum value it can take is %ld\n",ULONG_MAX);


    printf("\nNumber of bytes occupied by signed int is %d",sizeof(signed int));
    printf("Minimum value it can take is %d\n",INT_MIN);
    printf("Minimum value it can take is %d\n",INT_MAX);


    printf("CHARACTER\n");
    printf("\nNumber of bytes occupied by CHAR is %d \n",sizeof(char));
    printf("Minimum value it can take is %d\n",CHAR_MIN);
    printf("Maximum value it can take is %d\n",CHAR_MAX);


    printf("\nNumber of bytes occupied by UNSIGNED CHAR is %d \n",sizeof(unsigned char));
    printf("Minimum value it can take is 0\n");
    printf("Maximum value it can take is %d\n",UCHAR_MAX);



    printf("\nNumber of bytes occupied by SIGNED CHAR is %d \n",sizeof(signed char));
    printf("Minimum value it can take is %d\n",SCHAR_MIN);
    printf("Maximum value it can take is %d\n",SCHAR_MAX);

    printf("FLOAT\n");
    printf("\nNumber of bytes occupied by FLOAT is %d \n",sizeof(float));
    printf("Minimum value it can take is %e\n",FLT_MIN);
    printf("Maximum value it can take is %e\n",FLT_MAX);


    printf("\nNumber of bytes occupied by DOUBLE is %d \n",sizeof(double));
    printf("Minimum value it can take is %e\n",DBL_MIN);
    printf("Maximum value it can take is %e\n",DBL_MAX);


    printf("\nNumber of bytes occupied by LONG DOUBLE is %d \n",sizeof(long double));
    printf("Minimum value it can take is %le\n",LDBL_MIN);
    printf("Maximum value it can take is %le\n",LDBL_MAX);

    printf("\nNumber of bytes occupied by UNSIGNED FLOAT is %d \n",sizeof(float));


    printf("\nNumber of bytes occupied by UNSIGNED DOUBLE is %d \n",sizeof(double));


    printf("\nNumber of bytes occupied by UNSIGNED LONG DOUBLE is %d \n",sizeof(long double));


    printf("\nNumber of bytes occupied by SIGNED FLOAT is %d \n",sizeof(float));


    return 0;
}
