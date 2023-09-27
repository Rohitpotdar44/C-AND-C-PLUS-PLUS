//values are taken from user itself
#include<stdio.h>
#include<string.h>
int main()
{   char name[50];
    int age;
    printf("What is your name?"); //it takes only one word a word after space get skipped
   // scanf("%s",&name);
    fgets(name, 50, stdin);     //so use this
    name[strlen(name-1)]='\0';  // additional part
    printf("How Old Are You?");
    scanf("%d",&age);
    printf("\nHello %s",name);
    printf("\nYou are %d years old",age);
    return 0;
}