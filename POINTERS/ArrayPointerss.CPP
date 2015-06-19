#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int A[3][3];
	int i=0, j=0;

	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			A[i][j] = rand() % 10;

	cout<<"A"<<'\n';
	cout<<A<<'\n';

	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[i][j]<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"A[i]"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[i]<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"A[j]"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[j]<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"A[0]+i"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[0]+i<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"A[0]+j"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[0]+j<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"A[i]+j"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<A[i]+j<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"*(A+i)+j"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<*(A+i)+j<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"*(A[i]+j)"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<*(A[i]+j)<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"*(*(A+i)+j)"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<*(*(A+i)+j)<<' ';
		cout<<'\n';
	}
	cout<<'\n';

	cout<<"(A+i)+j"<<"\n";
	for(i=0;i<3;i++)
	{
        for(j=0;j<3;j++)
			cout<<(A+i)+j<<' ';
		cout<<'\n';
	}
	cout<<'\n';
}

