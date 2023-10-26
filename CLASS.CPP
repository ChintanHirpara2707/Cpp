#include<iostream.h>
#include<conio.h>

class Table
{
  int no;
  int limit;
  public:
  void getdata()
  {
	cout<<"Input No :";
	cin>>no;
	cout<<"Enter Limit:";
	cin>>limit;
  }
  void print()
  {
	int i;
	for(i=1;i<=limit;i++)
	{
		cout<<no<<" * "<<i<<" = "<<no*i<<endl;
	}
  }
};

int main()
{clrscr();
 Table t1;
 t1.getdata();
 t1.print();

 getch();
 return (0);
}