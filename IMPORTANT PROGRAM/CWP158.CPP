#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
struct student
{
     int roll_no;
     int p,c,m;
     float avg;
};
void main()
{
     struct student s[60];
     int i,n;
     clrscr();
     cout<<"How many students=";
     cin>>n;
     cout<<"Enter information of all\n";
     for(i=0;i<n;i++)
     {
	cout<<"Roll no=";
	cin>>s[i].roll_no;
	cout<<"Physics Chemistry Maths=";
	cin>>s[i].p>>s[i].c>>s[i].m;
	s[i].avg=(s[i].p+s[i].c+s[i].m)/3.0;
     }
     cout<<"Roll_no Average\n";
     for(i=0;i<n;i++)
	cout<<setw(7)<<s[i].roll_no<<setw(8)<<setprecision(2)<<s[i].avg<<'\n';
     getch();
}

