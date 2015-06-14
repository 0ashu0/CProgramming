#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,temp;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;
	cout<<"Enter elements in ascending order=";
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}

	cout<<"Descending order\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';

	getch();
}
