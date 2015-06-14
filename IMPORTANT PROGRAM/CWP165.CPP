#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
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
    void calculate(struct student *);
    clrscr();
    cout<<"How many students(not more than 60)=";
    cin>>n;
    cout<<"Enter information of all\n";
    for(i=0;i<n;i++)
    {
	cout<<"Roll no=";
	cin>>s[i].roll_no;
	cout<<"Phy Chem Maths=";
	cin>>s[i].p>>s[i].c>>s[i].m;
	calculate(&s[i]);
    }
    cout<<"Roll_no Average\n";
    for(i=0;i<n;i++)
	cout<<setw(7)<<s[i].roll_no<<setw(8)<<setprecision(2)<<s[i].avg<<'\n';
    getch();
}
void calculate(struct student *q)
{
	q->avg=(q->p + q->c + q->m)/3.0;
}

