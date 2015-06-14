#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
     float a[100];
     int i,n;
     float mean(float [],int);
     float sd(float [],int);
     clrscr();
     cout<<"How many elements=";
     cin>>n;
     cout<<"Enter elements=";
     for(i=0;i<n;i++)
	 cin>>a[i];
     cout<<"Mean="<<mean(a,n)<<'\n';
     cout<<"Std. deviation="<<sd(a,n)<<'\n';
     getch();
}
float mean(float p[],int n)
{
	int i;
	float sum=0;
	for(i=0;i<n;i++)
	    sum=sum+p[i];
	return sum/n;
}
float sd(float p[],int n)
{
	int i;
	float sum=0,m;
	m=mean(p,n);
	for(i=0;i<n;i++)
	    sum=sum+(p[i]-m)*(p[i]-m);
	return sqrt(sum/n);
}




