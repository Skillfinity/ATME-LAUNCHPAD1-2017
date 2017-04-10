#include <stdio.h>
#include <limits.h>

int main()
{
    int integertype;
    long int intlongtype;
    short int intshorttype;
    unsigned int unsignedinttype;
    unsigned short unsignedshorttype;
    unsigned long unsignedlongtype;
    signed int signedinttype;

    char chartype;
    unsigned char unsignedchartype;
    signed char signedchartype;

    float floattype;
    double doubletype;
    long double longdoubletype;


    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("size of int= %d Byte\n", sizeof(integertype));

    printf("The minimum value of LONG INT  = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld Byte \n", LONG_MAX);
    printf("size of long int= %ld Byte\n \n", sizeof(intlongtype));

    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);
    printf("size of short int= %ld Byte\n \n", sizeof(intshorttype));

     printf("The maximum value of UNSIGNED INT = %d\n", UINT_MAX);
    printf("size of unsigned int= %ld Byte\n \n", sizeof(unsignedinttype));


   printf("The maximum value of UNSIGNED LONG = %d\n",ULONG_MAX );
   printf("size of  unsigned long= %ld Byte\n \n", sizeof(unsignedlongtype));


   printf("The maximum value of UNSIGNED SHORT = %d\n", USHRT_MAX);
   printf("size of unsigned short= %ld Byte\n \n", sizeof(unsignedshorttype));

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);
   printf("size of CHAR= %ld Byte\n \n", sizeof(chartype));

   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);
   printf("size of unsigned CHAR= %ld Byte\n \n", sizeof(unsignedchartype));


   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("size of signed CHAR= %ld Byte\n \n", sizeof(signedchartype));

   printf("The number of bits in a byte %d \n \n", CHAR_BIT);

   printf("size of float= %ld Byte\n \n", sizeof(floattype));
   printf("size of double= %ld Byte\n \n", sizeof(doubletype));
   printf("size of long double= %ld Byte\n \n", sizeof(longdoubletype));

   return(0);
}
