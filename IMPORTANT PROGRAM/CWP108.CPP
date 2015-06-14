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

	for(i=0;i<n-1;i+=2)
	    if(a[i]>a[i+1])
	    {
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	    }

	cout<<"Modified array\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';

	getch();
}
