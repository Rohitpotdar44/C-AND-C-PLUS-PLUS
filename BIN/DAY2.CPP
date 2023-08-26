/*#include<iostream.h>
#include<conio.h>
void main()
{       char vote;
	clrscr();
		cout<<"enter your vote\n A:LEADER 1 \n B:LEADER 2"<<endl;
		cin>>vote;
		switch(vote)
		{
			case 'A':
				cout<<"YOU VOTE FOR LEADER 1"<<endl;
				break;
			case 'B':
				cout<<"YOU VOTE FOR LEADER 2"<<endl;
				break;
			default:
				cout<<"invalid ";
				break;

		}

		getch();



}*/
#include<iostream.h>
#include<conio.h>
void main()
{
	int emp[]={2,3,6,8,11,13,14,20};
	clrscr();
	for(int i=0;i<8;i++)
	{
		if(emp[i]%2==0)
		{
			cout<<emp[i]<<"even"<<endl;

		}
		else
		{	cout<<emp[i]<<"odd"<<endl;

		}
	 }
	 getch();
 }
