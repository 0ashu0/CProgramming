#include<iostream.h>
#include<conio.h>
struct date
{
   int dd,mm,yy;
};
void main()
{
    struct date ad,td;
    clrscr();
    cout<<"Enter today\'s date=";
    cin>>td.dd>>td.mm>>td.yy;
    cout<<"Enter other date=";
    cin>>ad.dd>>ad.mm>>ad.yy;
    if(ad.yy>td.yy) cout<<"Other date is yet to come\n";
    else
	if(ad.yy<td.yy) cout<<"Other date has been passed\n";
	else
	    if(ad.mm>td.mm) cout<<"Other date is yet to come\n";
	    else
		if(ad.mm<td.mm) cout<<"Other date has been passed\n";
		else
		   if(ad.dd>td.dd) cout<<"Other date is yet to come\n";
		   else
			if(ad.dd<td.dd) cout<<"Other date has been passed\n";
			else
			    cout<<"It is today\'s date\n";
     getch();
}




