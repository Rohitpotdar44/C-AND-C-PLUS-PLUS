#include<stdio.h>
#include<stdbool.h>
int main()
{
    float temp;
    bool clear=true;
    printf("Enter temp in C=\n");
    scanf("%f",&temp);
    if(temp<=0 || temp<10 && clear)
    {
        printf("\n The whether is bad");
    }
    else
    {
        printf("\n The whether is  good");
    }
    return 0;
} 