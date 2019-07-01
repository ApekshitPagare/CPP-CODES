#include<iostream>
using namespace std;

class Student
{
	int roll;
	public:
	void get_roll(int a)
	{
		roll=a;
	}
	void display_roll()
	{
		cout<<"\n";
		cout<<"\tRoll Number: "<<roll<<endl;
	}
};

class Marks : public Student
{
	protected:

	double m1;

	double m2;
	
	public:
	void get_marks(double x,double y)
	{
		m1=x;
		m2=y;
	}
	void display_marks()
	{
		cout<<"\tMarks 1: "<<m1<<endl;
		cout<<"\tMarks 2: "<<m2<<endl;
	}
};

class Sports
{
	protected:

	double sp;
	
	public:
	void get_sportsmarks(double q)
	{
		sp=q;
	}
	void display_sportsmarks()
	{
		cout<<"\tSports Marks: "<<sp<<endl;
	}
};		

class Results : public Marks,public Sports
{
	public:
	void display_total()
	{
		display_roll();
		display_marks();
		display_sportsmarks();
		cout<<"\tTotal Marks: "<<m1+m2+sp<<endl;
	}
};

int main()
{
	Results r;
	int a=0;
	double b=0.0;
	double c=0.0;
	double d=0.0;

	cout<<"\n";
	cout<<"\tEnter the Student's Roll Number: "<<endl;
	cin>>a;
	r.get_roll(a);

	cout<<"\tEnter the Student's Mark 1: "<<endl;
	cin>>b;
	cout<<"\tEnter the Student's Mark 2: "<<endl;
	cin>>c;
	r.get_marks(b,c);

	cout<<"\tEnter the Student's Sports Marks: "<<endl;
	cin>>d;
	r.get_sportsmarks(d);

	r.display_total();
	
	return 0;
}	
