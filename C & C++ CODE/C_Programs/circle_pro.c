#include<stdio.h>
int main()
{
    double x,circum,area;
    const double PI=3.14159;
    printf("Enter a radius of circle");
    scanf("%lf",&x);
    circum=2*PI*x;
    area=PI*x*x;
    printf("Circumference of circle is:%lf\n",circum);
    printf("Area of circle is:%lf",area);
    return 0;

}