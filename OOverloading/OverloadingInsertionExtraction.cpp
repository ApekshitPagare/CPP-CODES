/*Insertion,Extraction Operator Overloading*/

#include<iostream>
using namespace std;

class Test
{
	int x;
	public:
	Test()
	{
		x=0;
	}
	friend istream& operator>>(istream& input,Test &obj);
	friend ostream& operator<<(ostream& output,Test &obj);
};

istream& operator>>(istream& input,Test &obj)
{
	cout<<"\tEnter the Number :"<<endl;
	input>>obj.x;
	return input;
}


ostream& operator<<(ostream& output,Test &obj)
{
	cout<<"\n";
	cout<<"\tOutput: "<<endl;
	output<<"\t"<<obj.x<<endl;
	return output;
}

int main()
{
	Test t;
	cin>>t;//Invokes istream& operator>>(); function
	cout<<t;//Invokes ostream& operator<<(); function
	return 0;
}
