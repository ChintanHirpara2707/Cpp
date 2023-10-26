#include<iostream.h>
#include<conio.h>
#include<string.h>

class Uidi
{
	int id;
	char name[20];
	int age;
	char add[50];
	public:
	Uidi()
	{
		id=0;
		strcpy(name,"Hcr");
		age=0;
		strcpy(add,"Lj Collage");
	}

	void setData()
	{
		cout<<"Id no  :"<<id<<endl;
		cout<<"Name   :"<<name<<endl;
		cout<<"Age    :"<<age<<endl;
		cout<<"Address:"<<add<<endl;
	}
	void print()
	{

	}
};
int main()
{
	clrscr();
	Uidi u1;
	u1.setData();
	getch();
	return 0;
}