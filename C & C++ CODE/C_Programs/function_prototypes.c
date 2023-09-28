#include<stdio.h>
void hello(char[],int ); //function prototype(easy to navigate program w.r.t main() at the top)

int main()
{
    char name[]="ROHIT\n";
    int age=19;
    hello(name,age);
}
void hello(char name[],int age)
{
    printf("\nHello %s",name);
    printf("You are %d years old",age);
    return 0;
}
