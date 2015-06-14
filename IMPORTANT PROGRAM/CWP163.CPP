#include<iostream.h>
#include<conio.h>
#include<math.h>
struct point
{
	float x,y;
};
void main()
{
	struct point p1,p2,p3;
	float d;
	clrscr();
	cout<<"Enter x and y coordinates of first point=";
	cin>>p1.x>>p1.y;
	cout<<"Enter x and y coordinates of second point=";
	cin>>p2.x>>p2.y;

	d=sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
	cout<<"Distance between the two points="<<d<<'\n';

	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;

	cout<<"Addition point=("<<p3.x<<","<<p3.y<<")\n";
	getch();
}


