#include<iostream.h>
#include<conio.h>
void main()
{
	int n,r,i,k;
	int nf,rf,nrf;
	clrscr();
	for(n=0;n<=4;n++)
	{
		for(k=1;k<=4-n;k++)
			cout<<' ';

		nf=1;
		for(i=1;i<=n;i++)
			nf=nf*i;

		for(r=0;r<=n;r++)
		{
			rf=1;
			for(i=1;i<=r;i++)
				rf=rf*i;

			nrf=1;
			for(i=1;i<=n-r;i++)
				nrf=nrf*i;

			cout<<' '<<nf/(rf*nrf);
		}
		cout<<'\n';
	}
	getch();
}
