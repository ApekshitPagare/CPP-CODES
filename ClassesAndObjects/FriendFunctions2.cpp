/*WAP TO ADD 2 numbers from diffrent classes using Friend Functions*/
#include<iostream>
using namespace std;

class XYZ;/*Forward Declaration for First class*/

class ABC
{
	int num;
	public:
	void get_data(int n)
	{
		num=n;
	}
	friend int Sum(ABC,XYZ);
};

class XYZ
{
	int Num;
	public:
	void get_data(int m)
	{
		Num=m;
	}
	friend int Sum(ABC,XYZ);
};
/*Function Sum() as being friend is  shared by 2 diffrent classes*/
int Sum(ABC obj1,XYZ obj2)
{
	return(obj1.num+obj2.Num);
}

int main()
{
	ABC A;
	XYZ X;
	
	A.get_data(10);
	X.get_data(20);

	cout<<"Sum: "<<Sum(A,X)<<endl;
	return 0;
}
