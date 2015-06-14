#include<iostream.h>
#include<conio.h>
void main()
{
       int n,sum=0,product=1,digit;
       long int rev=0;
       clrscr();
       cout<<"Enter one positive integer=";
       cin>>n;
       if(n<=0) cout<<"Invalid data\n";
       else
       {
		while(n>0)
		{
			digit=n%10;
			sum=sum+digit;
			product=product*digit;
			rev=rev*10+digit;
			n=n/10;
		}
		cout<<"Sum of the digits="<<sum<<'\n';
		cout<<"Product of the digits="<<product<<'\n';
		cout<<"Reverse number="<<rev<<'\n';
       }
       getch();
}
