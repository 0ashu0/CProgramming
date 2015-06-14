#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,j,n,temp;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;
	cout<<"Enter all elements=";
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}

	cout<<"Elements in ascending order\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';
	getch();
}
