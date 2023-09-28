#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Rohit";
    char string2[]="Potdar";
    strlwr(string1);//convert a string to lower case
    printf("%s\n",string1);
    strupr(string1);//convert a string to upper case
    printf("%s\n",string1);
    strcat(string1,string2);//appends string 2 to end of string 1
    printf("%s\n",string1);
    strncat(string1,string2,1);//appends n characters from string 2 to end of string 1
    printf("%s\n",string1);
    strcpy(string1,string2);//copy string 2 to string 1
    printf("%s\n",string1);
    strncpy(string1,string2,2);//copy n characters of string 2 to string 1
    printf("%s\n",string1);
    strset(string1,'@');//set all characters of a string to a given character
    printf("%s\n",string1);
    int result=strlen(string1);//returns string length as integer
    printf("%d\n",result); 
    int result1=strcmp(string1,string2);// string compare all characters
    if(result1==0)
    {
        printf("These strings are same\n");
    } 
    else
    {
        printf("These strings are not same\n"); 
    }
    int result2=strncmp(string1,string2,1);// string compare n characters
    if(result2==0)
    {
        printf("These strings are same\n");
    } 
    else
    {
        printf("These strings are not same\n"); 
    }
    int result3=strcmpi(string1,string1);// string compare all (ignore case)
    if(result3==0)
    {
        printf("These strings are same\n");
    } 
    else
    {
        printf("These strings are not same\n"); 
    }
    int result4=strnicmp(string1,string1,1);// string compare n characters (ignore case)
    if(result4==0)
    {
        printf("These strings are same\n");
    } 
    else
    {
        printf("These strings are not same\n"); 
    }
    return 0;
}