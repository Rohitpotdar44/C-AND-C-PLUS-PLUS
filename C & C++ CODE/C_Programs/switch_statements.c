#include<stdio.h>
int main()
{   char grade;
    printf("\nEnter your letter grade:");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':printf("Perfect!");
        break;
    case 'B':printf("You did good!");
        break;
    case 'C':printf("You are ok!");
        break;
    case 'D:':printf("At least you are not fail ");       
        break;
    case 'F':printf("You failed!");
        break;
    default:printf("you enter wrong letter grade");
        break;
    }
    return 0;
}