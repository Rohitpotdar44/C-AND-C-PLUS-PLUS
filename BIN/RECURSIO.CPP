/*#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	else if(b==0)
	     {
		return b;
	     }
	     else
	     {
		return (b,a%b);
	     }
}
void main()
{
	int a,b,result;
	clrscr();
	printf("\n enter a & b ");
	scanf("\n %d%d",&a,&b);
	result=gcd(a,b);
	printf("GCD is:%d",result);
	getch();
}

#include<stdio.h>
#include<conio.h>
int sum( int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum(n-1);
	}
}
void main()
{
	int n,result;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	result=sum(n);
	printf("sum of first %d natural numbers is:%d",n,result);
	getch();
}
*/

#include<stdio.h>
#include<conio.h>
int exp(int n1,int n2)
{
	     if(n2==0)
	     {
		return 1;
	     }
	     else
	     {
		return n1*exp(n1,(n2-1));
	     }
}
void main()
{
	int n1,n2,result;
	clrscr();
	printf("\nenter two numbers ");
	scanf("%d%d",&n1,&n2);
	result=exp(n1,n2);
	printf("\nexp of %d and %d is:%d",n1,n2,result);
	getch();
}





