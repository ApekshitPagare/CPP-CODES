/*Return Transpose of Matrix*/
#include<iostream>
using namespace std;

class Matrix
{
	int i;
	int j;
	int m[3][3];
	public:
	void get_data()
	{
		cout<<"Enter the Matrix: "<<endl;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cin>>m[i][j];
			}
		}
	}

	void display()
	{
		cout<<"\tMatrix: "<<endl;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				cout<<"\t"<<m[i][j];
				cout<<"\t";
			}
		cout<<"\n";
		}
	}
       	friend int trans(Matrix);
};
int trans(Matrix obj1)
{
	int i;
	int j;
	Matrix obj2;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			obj2.m[i][j]=obj1.m[j][i];
		}
	}
	return(obj2);
}	

int main()
{
	Matrix M;
	M.get_data();
	M.display();
	Matrix M2;
	M2=trans(M);
	M2.display();	
	return 0;
}
		
