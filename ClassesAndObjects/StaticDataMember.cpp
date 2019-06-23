#include<iostream>
using namespace std;

class NUM
{
	int num;
	static int count;/*Declaration of static data member*/
	public:
	void get_num(int a);
	void display_num(); 
	void display_count();
};

int NUM::count=0;/*Initializing Static Member*/

void NUM:: get_num(int a)
{
	num=a;
	count++;
}
void NUM:: display_num()
{
	cout<<"\tNum: "<<num<<endl;
}
void NUM:: display_count()
{
	cout<<"\tCount: "<<count<<endl;
}


int main()
{
	NUM n;
	int b;
	cout<<"Enter the Number: "<<endl;
	cin>>b;
	n.get_num(b);
	n.display_num();
	cout<<"\n";
	n.display_count();
	cout<<"\n";

	return 0;
}

 

