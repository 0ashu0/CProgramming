#include<iostream.h>
#include<conio.h>
void main()
{
     int a[100];
     int i,n,x,y;
     int search(int [],int,int);
     clrscr();

     cout<<"How many elements(not more than 100)=";
     cin>>n;

     cout<<"Enter elements=";
     for(i=0;i<n;i++)
	cin>>a[i];

     cout<<"Enter the element to be searched=";
     cin>>x;

     y=search(a,n,x);

     if(y==-1) cout<<x<<" is not present\n";
     else cout<<x<<" is present at position "<<y<<'\n';

     getch();
}
int search(int p[],int n,int x)
{
	int i,count=0;
	for(i=0;i<n;i++)
	    if(p[i]==x)
		break;
	if(i<n) return i;
	else return -1;
}

