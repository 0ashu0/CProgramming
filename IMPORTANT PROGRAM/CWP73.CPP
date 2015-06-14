#include<iostream.h>
#include<conio.h>
void main()
{
      int n,j;
      clrscr();
      cout<<"Enter one positive integer=";
      cin>>n;
      if(n<=0) cout<<"Invalid data\n";
      else if(n==1) cout<<"1 is nither prime nor composite\n";
	   else
	   {
		j=2;
		while(n%j!=0)
		     j++;
		if(j==n) cout<<n<<" is prime\n";
		else cout<<n<<" is not prime\n";
	   }
      getch();
}
