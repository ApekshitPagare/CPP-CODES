/*WAP TO ADD 2 numbers and find its Mean using Friend Functions*/

#include<iostream>
using namespace std;

class NUM
{
	int a;
	int b;
	public:
	void get_data(int,int);
	friend float mean(NUM);/*Friend Function*/
};

void NUM::get_data(int c,int d)
{
	a=c;
	b=d;
}

float mean(NUM m)/*Friend Function Declaration*/
{
	return ((m.a+m.b)/2);
}
int main()
{
	NUM n;
	n.get_data(10,20);
	cout<<"Mean of 2 numbers: "<<mean(n)<<endl;/*Sends object 'n' to friend function to get its mean*/
	return 0;
}
