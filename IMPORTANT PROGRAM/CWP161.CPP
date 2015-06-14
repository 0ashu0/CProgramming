#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
struct date
{
     int dd,mm,yy;
};
struct student
{
     int roll_no;
     char name[80];
     int total;
     struct date dob;
};
void main()
{
	struct student s[50];
	int i,j,n,option;
	void sort1(struct student[],int);
	void sort2(struct student[],int);
	void sort3(struct student[],int);
	void sort4(struct student[],int);
	clrscr();
	cout<<"How many students(not more than 50)=";
	cin>>n;
	cout<<"Enter information of all\n";
	for(i=0;i<n;i++)
	{
	   cout<<"Roll no=";
	   cin>>s[i].roll_no;
	   cout<<"Name=";
	   gets(s[i].name);
	   cout<<"Total=";
	   cin>>s[i].total;
	   cout<<"Birthdate=";
	   cin>>s[i].dob.dd>>s[i].dob.mm>>s[i].dob.yy;
	}
	do
	{
	   clrscr();
	   cout<<"1:Roll_no\n2:Name\n3:Total\n4:Birthdate\n5:Quit\n";
	   cout<<"Enter your option=";
	   cin>>option;
	   switch(option)
	   {
		case 1:sort1(s,n);break;
		case 2:sort2(s,n);break;
		case 3:sort3(s,n);break;
		case 4:sort4(s,n);break;
	   }
	   if(option>=1&&option<=4)
	   {
		cout<<"Roll_no Name                                    Total Birthdate\n";
		for(i=0;i<n;i++)
		{
		    cout<<setw(7)<<s[i].roll_no<<' '<<s[i].name;
		    for(j=1;j<=40-strlen(s[i].name);j++)
			   cout<<' ';
		    cout<<setw(5)<<s[i].total<<' ';
		    cout<<setw(2)<<s[i].dob.dd<<'/'
			<<setw(2)<<s[i].dob.mm<<'/'
			<<setw(4)<<s[i].dob.yy<<'\n';
		}
		getch();
	   }
	}
	while(option!=5);
}
void sort1(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(p[j].roll_no>p[j+1].roll_no)
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
}
void sort2(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(strcmpi(p[j].name,p[j+1].name)>0)
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
}
void sort3(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(p[j].total<p[j+1].total)
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
}
void sort4(struct student p[],int n)
{
	int i,j;
	struct student temp;
	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(p[j].dob.yy>p[j+1].dob.yy||
	   p[j].dob.yy==p[j+1].dob.yy&&p[j].dob.mm>p[j+1].dob.mm||
	   p[j].dob.yy==p[j+1].dob.yy&&p[j].dob.mm==p[j+1].dob.mm||p[j].dob.dd>p[j+1].dob.dd)
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
}


