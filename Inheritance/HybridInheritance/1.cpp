#include<iostream>
using namespace std;

class STUDENT 
{
	int x;
	public:
	STUDENT();
	STUDENT(int);
	int get_roll();
	void display();
};

STUDENT :: STUDENT()
{
	x=0;
}

STUDENT :: STUDENT(int x)
{
	this->x=x;
}

int STUDENT :: get_roll()
{
	return x;
}

void STUDENT :: display()
{
	cout<<"\n";
	cout<<"\tRoll Number: "<<get_roll()<<endl;
}




class TEST
{	
	double t1;
	double t2;
	public:
	TEST();
	TEST(double,double);
	int get_markt1();
	int get_markt2();
	void Display();
};

TEST :: TEST()
{
	t1=0.0;
	t2=0.0;
}

TEST :: TEST(double t1,double t2)
{
	this->t1=t1;
	this->t2=t2;
}

int TEST :: get_markt1()
{
	return t1;
}

int TEST :: get_markt2()
{
	return t2;
}

void TEST :: Display()
{
	cout<<"\tMarks 1: "<<get_markt1()<<endl;
	cout<<"\tMarks 2: "<<get_markt2()<<endl;
}








class SPORTS
{
	double sp;	
	public:
	SPORTS();
	SPORTS(double);
	int get_markSP();
	void DISPLAY();
};

SPORTS :: SPORTS()
{
	sp=0.0;
}

SPORTS :: SPORTS(double sp)
{
	this->sp=sp;
}

int SPORTS :: get_markSP()
{
	return sp;
}


void SPORTS :: DISPLAY()
{
	cout<<"\tSports Marks: "<<get_markSP()<<endl;
}





class RESULTS : public STUDENT,public TEST,public SPORTS
{
	double Total;
	public:
	RESULTS();
	RESULTS(double);
	void Calculate();
	int get_total();
	void dIsPlAy();
};


RESULTS :: RESULTS()
{
	Total=0.0;
}

RESULTS :: RESULTS(double Total)
{
	this->Total=Total;
}


int RESULTS :: get_total()
{
	return Total;
}

void RESULTS :: dIsPlAy()
{
	cout<<"\tTotal Marks: "<<get_total()<<endl;
}

int main()
{
	int a;
	cout<<"\n";
	cout<<"\tEnter the Student's Roll Number: "<<endl;
	cin>>a;
	STUDENT s(a);

	double b=0.0;
	double c=0.0;
	cout<<"\n";
	cout<<"\tEnter the Student's Marks 1: "<<endl;
	cin>>b;
	cout<<"\tEnter the Student's Marks 2: "<<endl;
	cin>>c;
	TEST t(b,c);

	
	double d=0.0;
	cout<<"\n";
	cout<<"\tEnter the Student's Sports Marks: "<<endl;
	cin>>d;
	SPORTS sp(d);
	
	double z=0.0;
	z=b+c+d;
	RESULTS r(z);

	s.display();
	t.Display();
	sp.DISPLAY();
	r.dIsPlAy();
	
	cout<<"\n";
	cout<<"\tExiting!"<<endl;
	exit(0);
	return 0;
}
