//Defult cunstroctor
#include<iostream.h>
#include<conio.h>

class Table
{
	int no,limit;
	public:
	Table()
	{
		no=1;
		limit=10;
	}
	void print()
	{
		cout<<"Num  :"<<no<<endl;
		cout<<"limit:"<<limit<<endl;
	}
	void printTable()
	{
		int i;
		for(i=1;i<=limit;i++)
		{
			cout<<no<<" * "<<i<<" = "<<no*i<<endl;
		}
	}
};

int main()
{
	clrscr();
	Table t1;
	t1.print();
	t1.printTable();
	getch();
	return 0;
}