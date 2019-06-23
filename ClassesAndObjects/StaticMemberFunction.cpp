#include<iostream>
using namespace std;

class NUM
{
	int num;
	static int count;
	public:
	void get_num();
	void display_num();
	static void display_count();
};

int NUM::count=0;

void NUM::get_num()
{
	count++;
	num=count;
}
void NUM::display_num()
{
	cout<<"\tNumber: "<<num<<endl;
}
void NUM::display_count()
{
	cout<<"\tCount: "<<count<<endl;
}

int main()
{
	NUM n;
	n.get_num();
	cout<<endl;
	
	n.display_num();
	cout<<endl;

	NUM::display_count();

	n.get_num();
	cout<<endl;
	
 	n.display_num();
	cout<<endl;

	NUM::display_count();

	return 0;
}
