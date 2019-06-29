/*Binary Plus using Friend Functions*/

#include<iostream>
using namespace std;


class complex
{
	double x;
	double y;
	public:
	complex()
	{
		x=0.0;
		y=0.0;
	}

	complex(double a,double b)
	{
		x=a;
		y=b;
	}

	void display()
	{
		cout<<"\n";
		cout<<"\t"<<x<<" + "<<y<<"j"<<endl;
	}

	friend complex operator+(complex,complex);

};

complex operator+(complex p,complex q)
{
	return complex((p.x+q.x),(p.y+q.y));
}

int main()
{
	
	complex C1(10.0,12.0);
	cout<<"C1: "<<endl;
	C1.display();
	complex C2(15.0,27.0);
	cout<<"C2: "<<endl;
	C2.display();

	complex C3;
	C3 = operator+(C1,C2);
	cout<<"C3: "<<endl;
	C3.display();

	return 0;
}
