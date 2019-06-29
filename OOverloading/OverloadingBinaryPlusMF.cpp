/*Binary Plus Operator Overloading Using Member function*/
/*Accept 3 objects, each have  2 private member of double ata type ,one real and one imaginary*/
/*Set values and display sum in 3rd object in polinomial equation type*/

#include<iostream>
using namespace std;

class complex
{
	double x;
	double y;

	public:

	complex();
	
	complex(double,double);

	void display();

	complex operator+(complex); //Binary PLUS operator in MF Declaration 

};

complex :: complex()
{
	x=0.0;
	y=0.0;
}

complex :: complex(double a,double b)
{
	x=a;
	y=b;
}

complex complex :: operator+(complex c) //Binary PLUS operator in MF Defination  //x+y==x.operator+/-(y)
{
	complex temp;//Object temp for C3,complex c is recieved C2 as object
	temp.x=x+c.x;//Setting values of  PM for C3 by adding 'x' ie PM of C1 and 'c.y' as PM of C2 through dot operator
	temp.y=y+c.y;
	return(temp);
}

void complex :: display()
{
	cout<<"\n";
	cout<<"\tNumber: "<<endl;
	cout<<"\t"<<x<<"+"<<y<<"j"<<endl;
}


int main()
{
	complex C1(2.5,3.5);
	cout<<"\n";
	cout<<"\tC1: "<<endl;
	C1.display();
	complex C2(10.0,20.0);
	cout<<"\n";
	cout<<"\tC2: "<<endl;
	C2.display();
	complex C3;
	C3=C1+C2; //Invoking complex  operator+(complex) function
	cout<<"\n";	
	cout<<"\tC3: "<<endl;
	C3.display();

	return 0;
}
