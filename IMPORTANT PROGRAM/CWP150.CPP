#include<iostream.h>
#include<conio.h>
void main()
{
	float a[100];
	int i,n,option;
	void sort(float[],int,int);
	clrscr();
	cout<<"How many elements=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
	    cin>>a[i];
	cout<<"Enter option(1:ascending,2:descending)=";
	cin>>option;
	sort(a,n,option);
	cout<<"Sorted array\n";
	for(i=0;i<n;i++)
	    cout<<a[i]<<' ';
	getch();
}
void sort(float p[],int n,int option)
{
	int i,j;
	float temp;
	if(option==1)
	{
	     for(i=n-1;i>0;i--)
	     for(j=0;j<i;j++)
	     if(p[j]>p[j+1])
	     {
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	     }
	}
	else
	{
	     for(i=n-1;i>0;i--)
	     for(j=0;j<i;j++)
	     if(p[j]<p[j+1])
	     {
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	     }
	}
}
