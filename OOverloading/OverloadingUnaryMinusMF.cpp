/*Operator Overload Unary Minus using member Function*/
/*Create 3 private memebers and display,get,and overload function*/
#include<iostream>
using namespace std;

class space
{
	int x;
	int y;
	int z;
	public:

	void get_data(int,int,int);
	void display();
	void operator-(); //Unary Minus Operator Member function
};

void space :: get_data(int a,int b,int c)
{
	x=a;
	y=b;
	z=c;
}

void space :: display()
{
	cout<<"\n";
	cout<<"\tx: "<<x<<endl;
	cout<<"\ty: "<<y<<endl;
	cout<<"\tz: "<<z<<endl;
}

void space :: operator-() //Defining Unary Minus Operator Member function
{
	x=-x;
	y=-y;
	z=-z;
}

int main()
{
	int a=10;
	int b=20;
	int c=30;
	
	space S;
	S.get_data(a,b,c);
	S.display();

	-S; //Invoking operator-() function
	    //Syntax->  op Object

	S.display();

	return 0;
}	
