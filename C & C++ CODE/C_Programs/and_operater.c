#include<stdio.h>
#include<stdbool.h>
int main()
{
    float temp;
    bool clear=true;
    printf("Enter temp in C=\n");
    scanf("%lf",&temp);
    if(temp>10 && temp<35 && clear)
    {
        printf("\n The whether is good");
    }
    else
    {
        printf("\n The whether is not good");
    }
    return 0;
} 