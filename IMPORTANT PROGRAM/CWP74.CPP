#include<iostream.h>
#include<conio.h>
void main()
{
      int n;
      int df=1,y,digit;
      clrscr();
      cout<<"Enter one positive integer=";
      cin>>n;
      if(n<=0) cout<<"Invalid data\n";
      else
      {
	y=n;
	while(n>9)
	{
	    n=n/10;
	    df=df*10;
	}
	while(df!=0)
	{
		digit=y/df;
		switch(digit)
		{
		     case 0:cout<<"zero "; break;
		     case 1:cout<<"one "; break;
		     case 2:cout<<"two "; break;
		     case 3:cout<<"three "; break;
		     case 4:cout<<"four "; break;
		     case 5:cout<<"five "; break;
		     case 6:cout<<"six "; break;
		     case 7:cout<<"seven "; break;
		     case 8:cout<<"eight "; break;
		     case 9:cout<<"nine "; break;
		}
		y=y%df;
		df=df/10;
	}
      }
      getch();
}