#include<iostream.h>
#include<conio.h>
void main()
{
	int x=123;
	int y=0345;
	int z=0x1af;
	clrscr();
	
	cout<<dec<<x<<" in decimal="<<oct<<x<<" in octal="
	<<hex<<x<<" in hexadecimal"<<endl;
	
	cout<<oct<<y<<" in octal="<<dec<<y<<" in deciaml="
	<<hex<<y<<" in hexadecimal"<<endl;
	
	cout<<hex<<z<<" in hexadecimal="<<dec<<z<<" in decimal="
	<<oct<<z<<" in octal"<<endl;
	
	getch();
}
