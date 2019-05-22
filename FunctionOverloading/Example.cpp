#include<iostream>
using namespace std;

class Calculation
{
	int a;
	int b;
	double c;
	double d;
	public:
		Calculation();
		Calculation(int,int,float,float);
		void add(int,int);
		void add(double,double);
		void sub(int,int);
		void sub(double,double);
		void mul(int,int);
		void mul(double,double);
		void div(int,int);
		void div(double,double);
};

Calculation :: Calculation()											/*Default Values to NULL*/
{
	this->a=0;
	this->b=0;
	this->c=0.0;
	this->d=0.0;
}

Calculation :: Calculation(int a,int b,float c,float d)						/*Set values from object in main function*/
{
	this->a=a;
	this->b=b;
	this->c=c;
	this->d=d;
}


void Calculation :: add(int a,int b)						/*If initialised using object then it replaces the value
										of private member 'a','b' to new value send to this member 											function*/ 
{
	this->a=a;
	this->b=b;
	int sum=0;
	sum=a+b;
	cout<<"Sum is: "<<sum<<endl;
}

void Calculation :: sub(int a,int b)						/*SAME FOR REST BELOW*/
{
	this->a=a;
	this->b=b;
	int min=0;
	min=a-b;
	cout<<"Diffrence is: "<<min<<endl;
}

void Calculation :: mul(int a,int b)
{
	this->a=a;
	this->b=b;
	int mul=0;
	mul=a*b;
	cout<<"Multiplication is: "<<mul<<endl;
}

void Calculation :: div(int a,int b)
{
	this->a=a;
	this->b=b;
	int div=0;
	div=a/b;
	cout<<"Division is: "<<div<<endl;
}

void Calculation :: add(double c,double d)					/*If initialised using object then it replaces the value
										of private member 'c','d' to new value send to this member 											function*/ 
{
	this->c=c;
	this->d=d;
	double sum=0;
	sum=c+d;
	cout<<"\nSum is: "<<sum<<endl;
}

void Calculation :: sub(double c,double d)					/*SAME FOR REST BELOW*/
{
	this->c=c;
	this->d=d;
	double min=0;
	min=c-d;
	cout<<"Difference is: "<<min<<endl;
}

void Calculation :: mul(double c,double d)
{
	this->c=c;
	this->d=d;
	double mul=0;
	mul=c*d;
	cout<<"Multiplication is: "<<mul<<endl;
}
void Calculation :: div(double c,double d)
{
	this->c=c;
	this->d=d;
	double div=0;
	div=c/d;
	cout<<"Division is: "<<div<<endl;
}

int main()
{
	Calculation c1=Calculation();				/*Using object c1,make values null*/
	c1.add(50,20);
	c1.sub(50,20);
	c1.mul(50,20);
	c1.div(50,20);
	
	c1.add(50.50,20.20);
	c1.sub(50.50,20.20);
	c1.mul(50.50,20.20);
	c1.div(50.50,20.20);


	return 0;

}
