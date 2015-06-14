#include<iostream.h>
#include<conio.h>
void main()
{
	float p,r,amount;
	int n,age;
	char gender,member;

	clrscr();
	cout<<"Enter principal amount, age, member, period and gender=";
	cin>>p>>age>>member>>n>>gender;
	if(gender=='m'||gender=='M')
		if(age<60)
			if(member=='n'||member=='N')
				r=9.25;
			else
				r=9.5;
		else
			if(member=='n'||member=='N')
				r=9.75;
			else
				r=10.0;
	else
		if(age<60)
			if(member=='n'||member=='N')
				r=9.35;
			else
				r=9.6;
		else
			if(member=='n'||member=='N')
				r=9.85;
			else
				r=10.1;
	amount=p+p*n*r/100;
	cout<<"Final amount="<<amount<<'\n';

	getch();
}


