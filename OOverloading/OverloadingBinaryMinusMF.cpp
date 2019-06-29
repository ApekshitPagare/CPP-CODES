/*Binary Minus Operator Overloading Using Member function*/
/*Accept 3 objects, each have  2 private member of double ata type ,one real and one imaginary*/
/*Set values and display diffrence in 3rd object in polinomial equation type*/


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
	complex operator-(complex);//DECLARING OPERATOR FUNCTION
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

void complex :: display()
{
	cout<<"\n";
	cout<<"\tNumber: "<<endl;
	cout<<"\t"<<x<<"+"<<y<<"j"<<endl;
}

complex complex :: operator-(complex c)//DEFINING OPERATOR FUNCTION
{
	complex temp;
	temp.x=x-c.x;
	temp.y=y-c.y;
	return(temp);
}

int main()
{
	complex C1(10.0,20.0);
	C1.display();
	complex C2(100.0,200.0);
	C2.display();
	complex C3;
	
	C3=C1-C2;//INVOKKING OPERATOR FUNCTION
	C3.display();

	return 0;
}
