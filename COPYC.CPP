#include<iostream.h>
#include<conio.h>
#include<string.h>

class inventory
{
	int pro_id;
	char pro_name[20];
	int pro_qu;
	int price;
	long int tot_price;
	char status;

	public:
	inventory()
	{
		pro_id=0;
		strcpy(pro_name,NULL);
		pro_qu=5;
		price=50;
		tot_price=pro_qu*price;
		status='Y';

	}
	inventory(inventory &i2)
	{
		pro_id=i2.pro_id;
		strcpy(pro_name,i2.pro_name);
		pro_qu=i2.pro_qu;
		price=i2.price;
		tot_price=i2.tot_price;
		status=i2.status;

	}
	void getData()
	{
		cout<<"enter pro_id"<<endl;cin>>pro_id;
		cout<<"enter pro_name"<<endl;cin>>pro_name;
		cout<<"enter pro_que"<<endl;cin>>pro_qu;
		cout<<"price"<<endl;cin>>price;
		cout<<"status"<<endl;cin>>status;
	}
	void print()
	{
		cout<<"product id"<<pro_id<<endl;
		cout<<"product name"<<pro_name<<endl;
		cout<<"product quantity"<<pro_qu<<endl;
		cout<<"price"<<price<<endl;
		tot_price=pro_qu*price;
		cout<<"total price"<<tot_price<<endl;
		cout<<"status"<<status<<endl;
	}
};
int main()
{
	clrscr();
	inventory i1,i2;

	i2.getData();

	cout<<"11"<<endl;
	i1.print();
	cout<<"12"<<endl;
	i2.print();

	inventory i3(i2);
	i3.print();
	getch();
	return 0;
}