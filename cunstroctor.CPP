#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
	int rno;
	char name[20];
	char div;
	int sem;
	int enroll;
	char email[20];
	int sub1,sub2,sub3,total;
	public:

	Student ()
	{
		rno=1;
		strcpy(name,"HCR");
		div='E';
		sem=3;
		enroll=0;
		strcpy(email,"hcr@gmail.com");
		sub1=sub2=sub3=total=0;
	}
	void print()
	{
		cout<<rno<<" ";
		cout<<name<<" ";
		cout<<div<<" ";
		cout<<sem<<" ";
		cout<<enroll<<" ";
		cout<<email<<" ";
		cout<<sub1;
		cout<<sub2;
		cout<<sub3<<" ";
		cout<<total<<endl;
	}
       /*	void input()
	{
		rno=1;
		strcpy(name,"HCR");
		div='E';
		sem=3;
		enroll=0;
		strcpy(email,"hcr@gmail.com");
		sub1=sub2=sub3=total=0;
	}*/
};

int main()
{	clrscr();
	Student s1,s2,s3;
	s1.print();
	s2.print();
	//s2.input();
	s3.print();
	//s3.input();
	getch();
	return 0;

}

//construtor:
//1. class name & construtor name must b same
//2. public
//2.

//construtor part:
//1.defult[0 or Null]
//2.perameterize
//3.copy