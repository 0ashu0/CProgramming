#include<iostream.h>
#include<conio.h>
void main()
{
	int a[10][10];
	int i,j,n,sumd=0,suml=0,sumu=0;
	clrscr();
	cout<<"Enter order of square matrix(not more than 10)=";
	cin>>n;
	cout<<"Enter elements of matrix=";
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		cin>>a[i][j];

	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	    if(i==j)
		sumd=sumd+a[i][j];
	    else
		if(i<j) sumu=sumu+a[i][j];
		else
			suml=suml+a[i][j];

	cout<<"Sum of disagonal elements="<<sumd<<'\n';
	cout<<"Average of diagonal elements="<<float(sumd)/n<<'\n';
	cout<<"Sum of upper triangular elements="<<sumu<<'\n';
	cout<<"Average of upper triangular elements="<<float(sumu)/((n*n-n)/2)<<'\n';
	cout<<"Sum of lower triangular elements="<<suml<<'\n';
	cout<<"Average of lower triangular elements="<<float(suml)/((n*n-n)/2)<<'\n';
	getch();
}




