/*Swap 2 Private members using friend functions*/

#include<iostream>
using namespace std;

class XYZ;/*Forward Declaration*/

class ABC
{
	int num;
	public:
	ABC();
	ABC(int);
	int get_num();
	friend int swap(ABC &,XYZ &);
};

ABC :: ABC()
{
	num=0;
}

ABC :: ABC(int num)
{
	this->num=num;
}

int ABC :: get_num()
{
	return num;
}




class XYZ
{
	int NUM;
	public:
	XYZ();
	XYZ(int);
	int get_NUM();
	friend int swap(ABC &,XYZ &);
};

XYZ :: XYZ()
{
	NUM=0;
}

XYZ :: XYZ(int NUM)
{
	this->NUM=NUM;
}

int XYZ :: get_NUM()
{
	return NUM;
}

int swap(ABC &obj1,XYZ &obj2)
{
	int temp=0;
	temp=obj1.num;
	obj1.num=obj2.NUM;
	obj2.NUM=temp;
}


int main()
{
	int n=0;
	int N=0;
	cout<<"\tEnter the Number 1: "<<endl;
	cin>>n;
	ABC a(n);
	cout<<"\n";

	cout<<"\tEnter the Number 2: "<<endl;
	cin>>N;
	XYZ x(N);
	cout<<"\n";

	cout<<"\tNumbers before swapping: "<<endl;
	cout<<"\tA: "<<a.get_num()<<endl;
	cout<<"\tX: "<<x.get_NUM()<<endl;
	cout<<"\n";

	swap(a,x);

	cout<<"\tNumbers after swapping: "<<endl;
	cout<<"\tA: "<<a.get_num()<<endl;
	cout<<"\tX: "<<x.get_NUM()<<endl;
	cout<<"\n";
	

	return 0;
}
