/*Vector operations:
ADD 2 Vectors
*/

#include<iostream>
using namespace std;

class Vector
{
	double A[3][3];
	double B[3][3];
	double C[3][3];

	public:
	void create1();
	void create2();
	void add();
	void display();
};

void Vector :: create1()
{
	cout<<endl;

	cout<<"\tEnter the Vector 1 Elements: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
}


void Vector :: create2()
{
	cout<<endl;

	cout<<"\tEnter the Vector 2 Elements: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>B[i][j];
		}
	}
}
void  Vector :: add()
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[j][j];
		}
	}
}

void Vector :: display()
{
	cout<<endl;
	cout<<"\tSUM Vector: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t"<<C[i][j]<<endl;
		}
	cout<<"\n";
	}
}


int main()
{
	Vector v;
	int x;
	do
	{
		cout<<"\tOptions: "<<endl;
		cout<<"\t1.Create Vector 1: "<<endl;
		cout<<"\t2.Create Vector 2: "<<endl;
		cout<<"\t3.Add 2 Vectors: "<<endl;
		cout<<"\t4.Exit: "<<endl;
		cout<<"\tSELECT YOUR OPTION: "<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
			v.create1();
			break;

			case 2:
			v.create2();
			break;

			case 3:
			v.add();
			v.display();
			break;
			
			case 4:
			cout<<"\tExiting!"<<endl;
			cout<<endl;
			exit(0);
			break;
		}
	}while(x!=5);
	
	return 0;
}
