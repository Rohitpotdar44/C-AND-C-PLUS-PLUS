//The data type is a collection of data with values having fixed values, meaning as well as its characteristics.
#include<stdio.h>
#include<stdbool.h> // for boolean data type 
int main()
{
    char a='C'; //single character = %c
    char b[]="Rohit";//array of characters =%s
    float c=3.141592; //4 bytes (32 bits of precision)[ prints 6-7 digits] =(%f)
    double d=3.141592653589793;//8 bytes(64 bits of precision)[ prints 15-16 digits]= (%lf)
    bool e= false;// 1 byte (true or false)=%d
    char f=100;//1 bye (-127 to +127)=%d or %c  (signed)
    unsigned char g=254;//1 byte (0 to 255) = %d or %c
    short int h=32767;// 2 byte(-32,768 to +32,767) =%d (signed)
    unsigned short int i=65535;// 2 byte(0 to +65535)=%d
    int j= 2142352523;// 4 bytes (-2,147,483,648 '2 billion' ) to (+2,147,483,648 ) =%d (signed)
    unsigned int k=3453564625; //4 bytes ( 0 to +4,294,967,295)=*%u*
    long long int l=8720384687236485;//8 bytes( -9 quintilion to +9 quintilion)=%lld
    unsigned long long int m= 872896908696729682;//8 bytes ( 0 to +18 quintilion)=%llu
    printf("%c\n",a);
    printf("%s\n",b);
    printf("%f\n",c);
    printf("%lf\n",d);
    printf("%d\n",e);
    printf("%c\n",f);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu\n",m);
    return 0; 
}