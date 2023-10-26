#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	public:
	A()
	{
		a=0;
	}
	void setA(int x)
	{
		a=x;
	}
	int setA()
	{return a;
	}
	void getA()
	{

	}
	void max(B obj)
	{
		if(a<obj.b)
		{
			cout<<"A is Greater:"<<a<<endl;
		}
		else
		{
			cout<<"B is Greater:"<<obj.getB<<endl;
		}
	}

	void print()
	{
	}
};

class B
{
	int b;
	public:
	B()
	{
		b=0;
	}
	void setB(int x)
	{
		b=x;
	}
	void getB(int x)
	{
		b=x;
	}
};

int main()
{
	clrscr();

	getch();
	return 0;
}