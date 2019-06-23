/*WAP to swap 2 private data of 2 classes using  friend function*/

#include<iostream>
using namespace std;

class XYZ;/*Forward Declaration*/
class ABC
{
	int num;
	public:
	void get_data(int n)
	{
		num=n;
	}
	friend int swap(ABC &,XYZ &);
	void display()
	{
		cout<<"\tNum: "<<num<<endl;
	}
};

class XYZ
{
	int Num;
	public:
	void get_data(int m)
	{
		Num=m;
	}
	friend int swap(ABC &,XYZ &);
	void Display()
	{
		cout<<"\tNum: "<<Num<<endl;
	}
};

int swap(ABC &obj1,XYZ &obj2)/*Objects recieved will  be converted to ob1 and obj2 and through the address will go to address of private 					memebers of each object of each class,get the value and swapped and returned*/
{
	int temp=0;
	temp=obj1.num;
	obj1.num=obj2.Num;
	obj2.Num=temp;

}

int main()
{
	ABC A;
	XYZ X;
	
	X.get_data(5);
	A.get_data(10);

	cout<<"\nBefore Swapping: "<<endl;
	X.Display();
	A.display();

	swap(A,X);

	cout<<"\nAfter Swapping: "<<endl;
	X.Display();
	A.display();


	return 0;
}
