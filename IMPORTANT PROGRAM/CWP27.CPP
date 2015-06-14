#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,d;
	clrscr();
	cout<<"Enter coefficients of quadratic equation=";
	cin>>a>>b>>c;
	if(a==0)
		if(b==0)
			cout<<"Invalid data\n";
		else
			cout<<"Root of linear equation="<<-c/b<<'\n';
	else
	{
		d=b*b-4*a*c;
		if(d==0) cout<<"Root="<<-b/(2*a)<<'\n';
		else
		if(d>0)
		{
			cout<<"Root1="<<(-b+sqrt(d))/(2*a)<<'\n';
			cout<<"Root2="<<(-b-sqrt(d))/(2*a)<<'\n';
		}
		else
		{
			cout<<"Root1="<<-b/(2*a)<<"+i("<<sqrt(-d)/(2*a)<<")\n";
			cout<<"Root2="<<-b/(2*a)<<"-i("<<sqrt(-d)/(2*a)<<")\n";
		}
	}
	getch();
}
