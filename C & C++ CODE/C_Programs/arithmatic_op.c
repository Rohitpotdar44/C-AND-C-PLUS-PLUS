/* +=(addition)
   -=(substraction)
   *=(multipliaction)
   /=(division)
   %=(modulus)
   ++=(increment)
   --=(decrement)
*/ 
#include<stdio.h>
int main()
{
    int x=5;
    int y=2;
    int z=x+y;
    printf("x+y=%d\n",x+y);
    printf("x-y=%d\n",x-y);
    printf("x*y=%d\n",x*y);
    printf("x/y=%f\n",(float)x/y);
    printf("x mod y=%d\n",x%y);
    x++;
    y--;
    printf("%d\n",x);
    printf("%d\n",y);

    return 0;
}