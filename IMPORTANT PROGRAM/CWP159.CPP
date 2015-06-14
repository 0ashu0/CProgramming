#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct book
{
     int id;
     char author_name[80];
     char title[80];
     int cost;
};
void main()
{
     struct book b[100];
     int i,n,count1=0,count2=0;
     unsigned long int sum1=0,sum2=0;
     clrscr();
     cout<<"How many books(not more than 100)=";
     cin>>n;
     cout<<"Enter information of all books\n";
     for(i=0;i<n;i++)
     {
	cout<<"Id=";
	cin>>b[i].id;
	cout<<"Author name=";
	gets(b[i].author_name);
	cout<<"Title=";
	gets(b[i].title);
	cout<<"Cost=";
	cin>>b[i].cost;
     }

     for(i=0;i<n;i++)
	if(b[i].cost>=300)
	{
	     count1++;
	     sum1=sum1+b[i].cost;
	}
	else if(b[i].cost>=100&&b[i].cost<=200)
	     {
		count2++;
		sum2=sum2+b[i].cost;
	     }

     cout<<"Sum of cost of books whose individual cost is 300 or above="<<sum1<<'\n';
     if(count1!=0) cout<<"Avg. cost of above books is="<<float(sum1)/count1<<'\n';
     cout<<"Sum of cost of books whose individual cost is between 100 and 200="<<sum2<<'\n';
     if(count1!=0) cout<<"Avg. cost of above books is="<<float(sum2)/count2<<'\n';
     getch();
}


