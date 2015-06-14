#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no;
	char name[40];
	int total;
};
void main()
{
	struct student s[50];
	struct student temp;
	int i,j,n;
	clrscr();
	cout<<"How many students(not more than 50)=";
	cin>>n;
	cout<<"Enter information of all\n";
	for(i=0;i<n;i++)
	{
	    cout<<"Roll no.=";
	    cin>>s[i].roll_no;
	    cout<<"Name=";
	    gets(s[i].name);
	    cout<<"Total=";
	    cin>>s[i].total;
	}

	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(s[j].total<s[j+1].total)
	{
	    temp=s[j];
	    s[j]=s[j+1];
	    s[j+1]=temp;
	}

	cout<<"Roll_no Name                                    Total\n";
	for(i=0;i<n;i++)
	{
	    cout<<setw(7)<<s[i].roll_no<<' '<<s[i].name;
	    for(j=1;j<=40-strlen(s[i].name);j++)
		cout<<' ';
	    cout<<setw(5)<<s[i].total<<'\n';
	}
	getch();
}


