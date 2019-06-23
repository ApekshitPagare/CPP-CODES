/*Create 2 classes with each private member setted and create Sum function and add those 2 using friend function*/
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
	friend int sum(ABC,XYZ);
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
	friend int sum(ABC,XYZ);
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




int sum(ABC obj1,XYZ obj2)
{
	return (obj1.get_num()+obj2.get_NUM());
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


	cout<<"\n";
	cout<<"\tSUM: "<<sum(a,x)<<endl;
	cout<<"\n";

	return 0;
}
