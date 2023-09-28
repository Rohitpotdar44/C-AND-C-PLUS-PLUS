#include<stdio.h>
#include<ctype.h>
int main()
{
    char unit;
    float temp;
    printf("Is the temperature is in C or F ?");
    scanf("%c",&unit);
    unit= toupper(unit);
    if(unit=='C')
    {
        printf("Enter temperature in Celcius:");
        scanf("%f",&temp);
        temp=(temp*9/5)+32;
        printf("The temp is F is:%f",temp);
    }
    else if(unit=='F')
        {
          printf("Enter temperature in Fahrenheit:");
          scanf("%f",&temp);  
          temp=((temp-32)*5)/9;
        printf("The temp is C is:%f",temp);
        }
        else
        {
            printf("Invalid temperature parameter");
        }
        return 0;
        

}