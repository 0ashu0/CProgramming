#include<iostream.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,j,n,x;
	clrscr();
	cout<<"How many elements(not more than 100)=";
	cin>>n;

	cout<<"Enter elements=";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<"Enter the elemnt to be deleted=";
	cin>>x;

	i=0;
	while(i<n&&a[i]!=x)
		i++;
	if(i<n)
	{
		for(j=i+1;j<n;j++)
			a[j-1]=a[j];
		n--;
		cout<<"Element deleted\n";
	}
	else
		cout<<"Element to be delted not found\n";

	cout<<"Array contents\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<' ';
	getch();
}