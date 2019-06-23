#include<iostream>
using namespace std;

class employee
{
	int A;
	char N[50];
	public:
	void get_data();
	void display_data();
};

void employee :: get_data()
{
	cout<<"Name: "<<endl;
	cin>>N;

	cout<<"Age: "<<endl;
	cin>>A;
}

void employee:: display_data()
{
	cout<<"\tName: "<<N<<endl;
	cout<<"\tAge: "<<A<<endl;
}

int main()
{
	int i;
	employee manager[2];/*Array Manager containing 2 objects of type 'employee'*/
	for(i=0;i<2;i++)
	{
		manager[i].get_data();/*Invoking Sending Details function for obj i*/
		cout<<"\tManager "<<i+1<<endl;
		manager[i].display_data();/*Invoking Displaying Details function for obj i*/
	}
	return 0;
}
