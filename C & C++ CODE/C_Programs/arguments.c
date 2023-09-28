#include<stdio.h>
void birthday(char name[],int age)
{
    printf("Hello %s HAPPY BIRTHDAY!\n",name);
    printf("%s you are %d years old\n",name,age);
}
int main()
{
    char name[]="Rohit";
    int age=19;
    birthday(name,age);
    return 0;
}