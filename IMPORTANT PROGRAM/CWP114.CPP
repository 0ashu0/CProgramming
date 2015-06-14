#include<iostream.h>
#include<conio.h>
void main()
{
	static int grade[11];
	int m,n,i;
	clrscr();
	cout<<"How many students=";
	cin>>n;
	cout<<"Enter marks of all=";
	for(i=1;i<=n;i++)
	{
		cin>>m;
		switch(m/10)
		{
			case 0:grade[0]++;break;
			case 1:grade[1]++;break;
			case 2:grade[2]++;break;
			case 3:grade[3]++;break;
			case 4:grade[4]++;break;
			case 5:grade[5]++;break;
			case 6:grade[6]++;break;
			case 7:grade[7]++;break;
			case 8:grade[8]++;break;
			case 9:grade[9]++;break;
			case 10:grade[10]++;break;
		}
	}
	for(i=0;i<=10;i++)
		cout<<"Number of students in grade "<<i<<"="<<grade[i]<<'\n';
	getch();
}

