#include<iostream.h>
#include<conio.h>
void main()
{
	int n,i,x,sp=0,sn=0,cp=0,cn=0,cz=0;
	clrscr();
	cout<<"How many integers=";
	cin>>n;
	if(n<=0) cout<<"Invalid data\n";
	else
	{
		cout<<"Enter data elements=";
		for(i=1;i<=n;i++)
		{
		    cin>>x;
		    if(x>0)
		    {
			sp=sp+x;
			cp++;
		    }
		    else
		    if(x<0)
		    {
			sn=sn+x;
			cn++;
		    }
		    else cz++;
		}
		cout<<"Sum of positive elements="<<sp<<'\n';
		cout<<"Number of positive elements="<<cp<<'\n';
		if(cp!=0) cout<<"Avg. of posisitve elements="<<float(sp)/cp<<'\n';

		cout<<"Sum of negative elements="<<sn<<'\n';
		cout<<"Number of negative elements="<<cn<<'\n';
		if(cn!=0) cout<<"Avg. of negative elements="<<float(sn)/cn<<'\n';

		cout<<"Number of zeroes="<<cz<<'\n';
	}
	getch();
}