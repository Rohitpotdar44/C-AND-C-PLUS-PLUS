  #include<iostream.h>
  #include<conio.h>
  void main()
  { int marks;
    clrscr();
    cout<<"enter your marks";
    cin>>marks;
    if(marks<35)
    {
	cout<<"fail";
    }
    else if(marks>=35 && marks<=60)
	 {    cout<<"passed with second class";
	 }
	 else if(marks>60 && marks<75)
	      {   cout<<"passed with first class";
	      }
	      else if(marks>100)
		   {  cout<<"invalid input";
		   }
		   else
		   {
		      cout<<"passed with distinction";
		   }

    getch();
   }


