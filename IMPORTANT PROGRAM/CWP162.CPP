#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
struct player
{
	char name[40];
	char country[20];
	int nom;
	float bat_avg;
};
void main()
{
	struct player p[50];
	struct player temp;
	int i,j,n;
	clrscr();
	cout<<"How many players(not more than 50)=";
	cin>>n;
	cout<<"Enter information of all\n";
	for(i=0;i<n;i++)
	{
	    cout<<"Name=";
	    gets(p[i].name);
	    cout<<"Country=";
	    gets(p[i].country);
	    cout<<"Number of matches=";
	    cin>>p[i].nom;
	    cout<<"Batting average=";
	    cin>>p[i].bat_avg;
	}

	for(i=n-1;i>0;i--)
	for(j=0;j<i;j++)
	if(p[j].bat_avg<p[j+1].bat_avg)
	{
	    temp=p[j];
	    p[j]=p[j+1];
	    p[j+1]=temp;
	}

	cout<<"Name                                    Bat_avg\n";
	for(i=0;i<n;i++)
	{
	    cout<<p[i].name;
	    for(j=1;j<=40-strlen(p[i].name);j++)
		cout<<' ';
	    cout<<setw(7)<<setprecision(2)<<p[i].bat_avg<<'\n';
	}
	getch();
}


