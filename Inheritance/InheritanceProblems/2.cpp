#include<iostream>
using namespace std;

class Person
{
	protected:
	int code;
	const char* N;
	public:
	void get_details(int a,const char* b)
	{
		code=a;
		N=b;
	}
	void display_details()
	{
		cout<<"\n";
		cout<<"\tCode: "<<code<<endl;
		cout<<"\tName: "<<N<<endl;
	}
};

class Account : public virtual Person
{
	protected:
	double pay;
	public:
	void get_pay(double c)
	{
		pay=c;
	}
	void display_Details()
	{
		cout<<"\tPay: "<<pay<<endl;
	}
};

class Admin : public virtual Person
{
	protected:
	int experience;
	public:
	void get_experience(int d)
	{
		experience=d;
	}
	void display_DEtails()
	{
		cout<<"\tExperience: "<<experience<<endl;
	}
};

class Master : public Admin,public Account
{
	public:
	void display()
	{
		display_details();
		display_Details();
		display_DEtails();
	}
};

int main()
{
	Master M;
	M.get_details(1,"Apekshit");
	M.get_pay(5000.0);
	M.get_experience(25);
	M.display();
	return 0;
}
