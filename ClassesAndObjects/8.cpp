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
	void Display()
	{
		cout<<"\n";
		cout<<"TransPosed Matrix: "<<endl;
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

	friend int trans(Matrix);
};

int trans(Matrix n)
{
	Matrix n2;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			n2.m[i][j]=n.m[j][i];
		}
	}
	cout<<"\n";
	cout<<"TransPosed Matrix: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<n2.m[i][j];
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
	trans(m1);
	return 0;
}
	

