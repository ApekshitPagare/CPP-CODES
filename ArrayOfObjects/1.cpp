/*Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects. */
#include<iostream>
using namespace std;

class Employee
{
	int id;
	char N[50];
	double salary;
	int date;
	int month;
	int year;
	public:
	void get_data()
	{
		cout<<"\t1.ID: "<<endl;
		cin>>id;

		cout<<"\t2.Name: "<<endl;
		cin>>N;

		cout<<"\t3.Salary: "<<endl;
		cin>>salary;		

		cout<<"\t4.Joining Date: "<<endl;
		cin>>date;

		cout<<"\t5.Joiniing Month: "<<endl;
		cin>>month;
	
		cout<<"\t6.Joining Year: "<<endl;
		cin>>year;
	}
	void display_data()
	{
		cout<<"\t1.ID: "<<id<<endl;
		cout<<"\t2.Name: "<<N<<endl;
		cout<<"\t3.Salary: "<<salary<<endl;
		cout<<"\t4.Joining Date: "<<date<<endl;
		cout<<"\t5.Joiniing Month: "<<month<<endl;	
		cout<<"\t6.Joining Year: "<<year<<endl;
	}
};

int main()
{
	Employee employees[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		cout<<"\n";
		cout<<"\tEmployee "<<i+1<<"\n"<<"\tENTER DETAILS: "<<endl;
		employees[i].get_data();
		cout<<"\n";		
	}
	for(i=0;i<10;i++)
	{
		cout<<"\n";
		cout<<"\tEmployee "<<i+1<<endl;
		cout<<"\tDetails: "<<endl;
		employees[i].display_data();
	}
	return 0;
}
