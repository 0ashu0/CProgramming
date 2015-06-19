#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int ran = rand() % 5 + 10;
int main()
{
	void mergeSort(int[], int, int);
	void display(int[]);
	void Combine(int[] ,int, int, int);

	srand(time(0));

	int A[ran];
	int i=0;
	int low,high;
	for(i=0;i<ran;i++)
	{
		A[i] = rand() % 15;
	}
	for(i=0;i<ran;i++)
	{
		cout<<A[i]<<' ';
	}
	low=0;
	high=ran-1;
	mergeSort(A,low,high);
	display(A);
}
void Combine(int A[], int low, int mid, int high)
{

}
void mergeSort(int A[],int low, int high)
{
	int mid;
	if(low<high)
	{
        mid = (low+high)/2;
        mergeSort(A,low,mid);
        mergeSort(A,mid+1,high);
        Combine(A,low,mid,high);
	}
}
void display(int A[])
{
	cout<<'\n';
	for(int i=0;i<ran;i++)
	{
		cout<<A[i]<<' ';
	}
}
