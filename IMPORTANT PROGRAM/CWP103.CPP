#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,x,n,count=0;
	clrscr();
	cout<<"How many integers(not more than 100)=";
	cin>>n;
	cout<<"Enter all elements=";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter element to be searched=";
	cin>>x;

	for(i=0;i<n;i++)
	   if(a[i]==x)
	   {
		count++;
		cout<<x<<" is present at position "<<i<<'\n';
	   }

	if(count==0) cout<<x<<" is not present\n";

	getch();
}