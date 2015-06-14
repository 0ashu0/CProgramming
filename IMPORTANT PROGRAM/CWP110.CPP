#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,temp;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
		cin>>a[i];

	temp=a[n-1];
	for(i=n-2;i>=0;i--)
		a[i+1]=a[i];
	a[0]=temp;

	cout<<"Modified array\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';

	getch();
}
