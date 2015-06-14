#include<iostream.h>
#include<conio.h>
void main()
{
	char x;
	clrscr();
	cout<<"Enter one character=";
	cin>>x;
	if(x>='A'&&x<='Z'||x>='a'&&x<='z')
		if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||
		   x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
			cout<<x<<" is vowel\n";
		else
			cout<<x<<" is consonant\n";
	else
		if(x>='0'&&x<='9')
			cout<<x<<" is digit\n";
		else
			cout<<x<<" is other character\n";
	getch();
}