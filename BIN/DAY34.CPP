

/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j;
	int a[3][3]={{10,20,30},{40,50,60},{70,80,90}};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	getch();
}*/

/*#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,a[3][3],sum=0;
	cout<<"Enter the Element"<<endl;
	//Accept element from user
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
			sum=sum+a[i][j];
		}
	}
	cout<<"Sum of element ="<<sum;
	getch();
}*/


//Function

//Without parameter and Without Argument
/*#include<iostream.h>
#include<conio.h>
void sum ()
{
	cout<<"Sum is "<<(30+20);
}
void main()
{
	clrscr();
	sum();
	getch();
}
//With parameter and Without Argument
/*
#include<iostream.h>
#include<conio.h>
int sum ()
{
	return(30+20);
}
void main()
{
	clrscr();
	cout<<sum();
	getch();
} */

//With Parameter and With Argument

/*
#include<iostream.h>
#include<conio.h>
int sum(int a , int b)
{
	return (a+b);
}
int sub(int a , int b)
{
	return (a-b);
}
int multi(int a ,int b)
{
	return (a*b);
}
double div (double a , double b)
{
	return (a/b);
}

void main()
{
	clrscr();
	int a,b;
	float c,d;
	cout<<"Enter A and B "<<endl;
	cin>>a>>b;
	cout<<"Enter C and D"<<endl;
	cin>>c>>b;
	cout<<"Sum "<<sum(a,b);
	cout<<"\nSub "<<sub(a,b);
	cout<<"\nMulti "<<multi(a,b);
	cout<<"\nDivison "<<div(c,d);
	getch();
}
*/

// Swap Demo using pointer

/*#include<iostream.h>
#include<conio.h>
void swap (int *a, int*b)
{
	int s;
	s=*a;
	*a=*b;
	*b=s;
}
void main()
{
	clrscr();
	int a,b;
	a=500;

	b=600;
	cout<<"Value before swap"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<"Value After swap"<<endl;
	swap(&a,&b);
	cout<<a<<endl<<b;
	getch();
}*/
/* #include<iostream.h>
 #include<conio.h>
 #include<math.h>
 void main()
 {
	float a,b,c,d,e,f;
	clrscr();
	cout<<"enter value of a"<<endl;
	cin>>a;
	cout<<"enter value of b"<<endl;
	cin>>b;
	cout<<"enter value of c"<<endl;
	cin>>c;
	cout<<"enter value of d"<<endl;
	cin>>d;
	cout<<"enter value of e"<<endl;
	cin>>e;
	cout<<"enter value of f"<<endl;
	cin>>f;
	a=abs(a);
	cout<<"\n value of abs(a)is "<<a;
	b=floor(b);
	cout<<" \nvalue of floor(b)is "<<b;
	c=ceil(c);
	cout<<" \nvalue of ceil(c) is"<<c;
	d=sqrt(d);
	cout<<" \nvalue of sqrt(d) is"<<d;
	e=pow(e,f);
	cout<<" \nvalue of pow(e) is"<<e;
	getch();
}*/
 /*#include<iostream.h>
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
	int i,j;
	int a[3][3]={{10,20,30},{20,30,40},{30,40,50}};
	int b[3][3]={{20,30,40},{30,40,50},{40,50,60}};
	int c[3][3];
	clrscr();
	cout<<"MATRIX A IS:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"MATRIX B IS:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"MATRIX C IS:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			if(c[i][j]%2==0)
			{

				cout<<"even"<<c[i][j]<<"\t";
			}
			else
			{
				cout<<"odd"<<c[i][j]<<"\t";
			}
		}
		cout<<endl;
	}
	getch();
 }*/
/*#include<iostream.h>
#include<conio.h>
void main()
{       A:
	int age;
	clrscr();
	cout<<"enter your age for voting="<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"you are eligible for voting"<<endl;
	}
	else
	{
		cout<<"you are not eligible for voting"<<endl;

	goto A;
	}

	getch();
}*/


