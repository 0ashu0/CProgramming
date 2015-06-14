#include<iostream.h>
#include<conio.h>
void main()
{
	int year[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int dd,mm,yy,sum=0,i;
	clrscr();
	cout<<"Enter date in dd mm yyyy format=";
	cin>>dd>>mm>>yy;
	for(i=1;i<=mm-1;i++)
		sum=sum+year[i];
	sum=sum+dd;

	if(mm>2)
		if(yy%400==0 || yy%4==0&&yy%100!=0)
			sum++;

	cout<<"It is day number "<<sum<<" of the year\n";
	getch();
}