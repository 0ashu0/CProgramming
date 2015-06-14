#include<iostream.h>
#include<conio.h>
void main()
{
	int x,sp=0,cp=0,sn=0,cn=0;
	clrscr();
	cout<<"Enter stream of integers(stream must end with zero)=";
	do
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
	}
	while(x!=0);
	cout<<"Sum of positive elements="<<sp<<'\n';
	cout<<"Number of positive elements="<<cp<<'\n';
	if(cp!=0) cout<<"Average of positive elements="<<float(sp)/cp<<'\n';

	cout<<"Sum of negative elements="<<sn<<'\n';
	cout<<"Number of negative elements="<<cn<<'\n';
	if(cn!=0) cout<<"Average of negative elements="<<float(sn)/cn<<'\n';

	getch();
}

