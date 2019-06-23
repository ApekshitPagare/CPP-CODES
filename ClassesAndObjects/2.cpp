/*Input 2 Integers and Pass themm to friend functions to get mean values*/

#include<iostream>
using namespace std;

class XYZ;/*Forward Declaration*/




class ABC
{
	int num=0;
	public:
	ABC();
	ABC(int);
	int get_num();
	friend float mean(ABC,XYZ);/*Friend Function Declaration*/
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
	int Num=0;
	public:
	XYZ();
	XYZ(int);
	int get_Num();
	friend float mean(ABC,XYZ);/*Friend Function Declaration*/
};

XYZ :: XYZ()
{
	Num=0;
}

XYZ :: XYZ(int Num)
{
	this->Num=Num;
}

int XYZ :: get_Num()
{
	return Num;
}



float mean(ABC obj1,XYZ obj2)			/*Friend Function Defination*/
{
	return ((obj1.get_num()+obj2.get_Num())/2.0);
}


int main()
{
	ABC a(5.0);
	XYZ x(10.0);
	cout<<"\n";
	cout<<"\tBefore Finding Mean"<<endl;
	cout<<"\ta= "<<a.get_num()<<endl;
	cout<<"\tx= "<<x.get_Num()<<endl;
	cout<<"\n";
	cout<<"\tAfter Finding Mean"<<endl;
	cout<<"\tMean: "<<mean(a,x)<<endl;/*Friend Fucntion Call*/

	return 0;
}

		
