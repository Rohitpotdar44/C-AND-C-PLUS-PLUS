#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are eligible for voting");
    }
    else if (age==0)
    {
        printf("You are just born");
    }
    else if (age<0)
    {
         printf("invalid age");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;

}