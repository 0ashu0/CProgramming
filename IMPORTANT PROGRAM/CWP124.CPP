#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int p[6][6];
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
		    if(j==0||j==i) p[i][j]=1;
		    else
			p[i][j]=p[i-1][j-1]+p[i-1][j];
		    cout<<p[i][j]<<'\t';
		 }
		 cout<<'\n';
	}
	getch();
}
