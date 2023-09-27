#include<stdio.h>
#include<math.h>
int main()
{
    double a;
    double b;
    double c;
    printf("Enter value of a\n");
    scanf("%lf",&a);
    printf("Enter value of b\n");
    scanf("%lf",&b);
    c=sqrt(pow(a,2)+pow(b,2));
    printf("Value of hypotenuse is=%lf\n",c);
    return 0;
}