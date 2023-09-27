/* format specifier (%) defines and format a type of data to be displayed
%d= integer
%c=character
%f=float
%lf=double
&s=string(array of characters)

%.1=decimal precision
%1=minimum field width
%-=left align*/ 

#include<stdio.h>
int main()
{
    float item1=5.67;
    float item2=10.00;
    float item3=100.99;
    printf("Item1:$%8.2f\n",item1);
    printf("Item2:$%8.2f\n",item2);
    printf("Item3:$%8.2f\n",item3);
    return 0;
}