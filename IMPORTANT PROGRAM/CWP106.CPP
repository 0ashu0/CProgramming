#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,max;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
		cin>>a[i];

	max=a[0];
	for(i=1;i<n;i++)
	    if(a[i]>max)
		max=a[i];

	cout<<"Highest="<<max<<'\n';
	getch();
}
