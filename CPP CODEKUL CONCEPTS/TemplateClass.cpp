#include<iostream>
using namespace std;

template <class T>		/*<class t>==class CALC*//*CALC is of generic class type*/
class CALC
{
	T a;			/*Private members 'a' & 'b' of generic Data Type T*/
	T b;
	public :

	CALC(T,T);		/*Generic Parametrised Constructor*/

	T addition();		/*Member Functions of data type 'T'*/
	T subtraction();
	T multiplication();
	T division();
};

template <class T>
CALC<T> :: CALC(T a,T b)
{
	this -> a = a;
	this -> b = b;
}

template <class T>
T CALC<T> :: addition()		/*<T> we need to tell c++ that data type belongs to above '<class T>' because of which original data types 					will be converted to generic data trpe 'T'*/
{
	return a + b;
}

template <class T>
T CALC<T> :: subtraction()
{
	return a - b;
}

template <class T>
T CALC<T> :: multiplication()
{
	return a * b;
}

template <class T>
T CALC<T> :: division()
{
	return a / b;
}

int main()
{
	int a;
	int b;
	float c;
	float d;
	
	cout<<"Enter the 2 Integers: "<<endl;
	cin>>a>>b;

	cout<<"Enter the 2 Float Numbers: "<<endl;
	cin>>c>>d;

	CALC<int> ad1(a,b);
	CALC<float> ad2(c,d);
	cout <<"\nAdding : " << ad1.addition() << endl;
	cout <<"Subtracting : " << ad1.subtraction() << endl;
	cout <<"Multiplying : " << ad1.multiplication()<< endl;
	cout <<"Dividing : " << ad1.division() << endl;

	cout <<"\nAdding : " << ad2.addition() << endl;
	cout <<"Subtracting : " << ad2.subtraction() << endl;
	cout <<"Multiplying : " << ad2.multiplication() << endl;
	cout <<"Dividing : " << ad2.division() << endl;
	return 0;
}
