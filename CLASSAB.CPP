#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A()
	{
		a=b=5;
	}
	void setA(int x)
	{
		a=x;
	}
	int  getA()
	{
		return a;
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
	int getB()
	{
		return b;
	}
	void max(A obj)
	{
		if(b>obj.getA())
		{
			cout<<"B is greater"<<b<<endl;
		}
		else
		{
			cout<<"A is greater"<<obj.getA()<<endl;
		}
	}
};
int main()
{
	clrscr();
	int c;
	A obj1;
	obj1.setA(30);
	B obj2;
	obj2.setB(50);
	obj2.max(obj1);

	getch();
	return 0;
}