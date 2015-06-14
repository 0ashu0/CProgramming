#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,j,x;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the element to be inserted=";
	cin>>x;
	cout<<"Enter the position at which it is to be inserted=";
	cin>>j;
	if(n==100) cout<<"Array full\n";
	else
	    if(j>n) cout<<"Position too large\n";
	    else
	    {
		for(i=n-1;i>=j;i--)
			a[i+1]=a[i];
		a[j]=x;
		n++;
		cout<<"Insertion done\n";
	    }
	cout<<"Array contents\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';
	getch();
}

