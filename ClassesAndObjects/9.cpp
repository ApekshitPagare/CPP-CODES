/*Pass A Matrix and get its transpose using friend function*/

#include<iostream>
using namespace std;

class Matrix
{
	int m[3][3];
	public:
	void read()
	{
		cout<<"\n";
		cout<<"\tEnter the Matrix elements: "<<endl;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cin>>m[i][j];
			}
		}
	}

	void display()
	{
		cout<<"\n";
		cout<<"Original Matrix: "<<endl;
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				cout<<m[i][j];
				cout<<"\t";
			}
		cout<<"\n";
		}
	}

	friend int multiplication(Matrix,Matrix);
};

int multiplication(Matrix n,Matrix n2)
{
	Matrix n3;
	int sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				sum=sum+n.m[i][k]*n2.m[k][j];
			}
		n3.m[i][j]=sum;
		}
	}
	cout<<"\n";
	cout<<"Resultant Matrix: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<n3.m[i][j];
			cout<<"\t";
		}
	cout<<"\n";
	}	
}


int main()
{
	Matrix m1;
	Matrix m2;
	m1.read();
	m1.display();
	m2.read();
	m2.display();
	multiplication(m1,m2);
	return 0;
}
	

