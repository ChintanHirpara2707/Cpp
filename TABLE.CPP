#include<iostream.h>
#include<conio.h>

int main()
{clrscr();
	int no,limit;
	cout<<"\tInput Number:";
	cin>>no;
	cout<<"\tEnter Limit:";
	cin>>limit;

	int i;
	for(i=1;i<=limit;i++)
	{
	 cout<<no<<" "<<"*"<<" "<<i<<" ="<<no*i<<endl;
	}
	cout<<endl;
	for(i=limit;i>=1;i--)
	{
	 cout<<no<<" "<<"*"<<" "<<i<<" ="<<no*i<<endl;
	}
 getch();
 return 0;
}