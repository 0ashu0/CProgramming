#include<iostream.h>
#include<conio.h>
#include<math.h>
struct point
{
	float x,y;
};
void main()
{
     struct point p[50];
     float d,min;
     int i,j,n,a,b;
     clrscr();
     cout<<"How many points(not more than 50)=";
     cin>>n;
     cout<<"Enter coordinates of all\n";
     for(i=0;i<n;i++)
     {
	 cout<<"x=";
	 cin>>p[i].x;
	 cout<<"y=";
	 cin>>p[i].y;
     }
     min=sqrt((p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y));
     a=0;
     b=1;
     for(i=0;i<n-1;i++)
     for(j=i+1;j<n;j++)
     {
       d=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
       if(d<min)
       {
	min=d;
	a=i;
	b=j;
       }
     }

     cout<<"Minimum distance between the two points="<<min<<'\n';
     cout<<"It is present between followig two points\n";
     cout<<'('<<p[a].x<<','<<p[a].y<<")\n";
     cout<<'('<<p[b].x<<','<<p[b].y<<")\n";
     getch();
}


