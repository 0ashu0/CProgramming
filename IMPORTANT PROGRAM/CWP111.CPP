#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	float x[100];
	int i,n;
	float mean,variance,sum1=0,sum2=0;
	clrscr();
	cout<<"How many elements=";
	cin>>n;
	cout<<"Enter elements=";
	for(i=0;i<n;i++)
		cin>>x[i];

	for(i=0;i<n;i++)
		sum1=sum1+x[i];
	mean=sum1/n;

	for(i=0;i<n;i++)
		sum2=sum2+(x[i]-mean)*(x[i]-mean);
	variance=sum2/n;

	cout<<"Mean="<<mean<<'\n';
	cout<<"Variance="<<variance<<'\n';
	cout<<"Standard deviation="<<sqrt(variance)<<'\n';

	getch();
}
