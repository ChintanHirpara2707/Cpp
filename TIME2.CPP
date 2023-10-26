#include<iostream.h>
#include<conio.h>
class Time
{
	int h,m,s;
	public:
	Time()
	{
		h=m=s=0;
	}
	Time(int sec)
	{

	}
	void print()
	{
		cout<<"Time in 24 hour"<<h<<":"<<m<<":"<<s;
	}
	void getTime()
	{
		cout<<"Enter hour  :"<<endl;cin>>h;
		cout<<"Enter minute:"<<endl;cin>>m;
		cout<<"Enter second:"<<endl;cin>>s;
	}
	operator int()
	{
		int sec;
		sec=h*3600+m*60+s;
		return sec;
	}
};
int main()
{
	clrscr();
	Time t1;
	t1.getTime();
	int sec;
	sec=t1;
	cout<<"Second"<<sec<<endl;

	getch();
	return 0;
}