//(condition 1)?(condition 2):(condition 3)
#include<stdio.h>
int findmax(int x,int y)
{
    return (x>y)?x:y;
}
int main()
{
    int max=findmax(12,13);
    printf("Max is=%d",max);
    return 0;
}