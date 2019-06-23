/*Vector operations:
1.Create
2.Modify
3.Multiply
4.Display*/

#include<iostream>
using namespace std;

class Vector
{
	double A[10];
	int s=0;
	public:
	void create();
	void modify();
	void multiply();
	void display();
};

void Vector :: create()
{
	cout<<endl;
	cout<<"\tEnter the Size of Vector: "<<endl;
	cin>>s;
	cout<<"\tEnter the Vector Elements: "<<endl;
	for(int i=0;i<=s;i++)
	{
		cin>>A[i];
	}
	s++;
}

void  Vector :: modify()
{
	double element=0.0;
	double replace=0.0;
	cout<<endl;
	cout<<"\tEnter the Element You want to Replace: "<<endl;
	cin>>element;
	cout<<endl;
	cout<<"\tEnter the Element You want to Replace it with: "<<endl;
	cin>>replace;
	for(int i=0;i<s;i++)
	{
		if(element==A[i])
		{
			for(int j=i;j<s;j++)
			{
				A[j]=replace;
				break;
			}
		}
	}
}

void Vector :: multiply()
{
	double element=0.0;
	double mul=0.0;
	cout<<endl;
	cout<<"\tEnter the Element You want to Multiply: "<<endl;
	cin>>element;
	cout<<endl;
	cout<<"\tEnter the Element You want to Multiply it with: "<<endl;
	cin>>mul;
	for(int i=0;i<s;i++)
	{
		if(element==A[i])
		{
			for(int j=i;j<s;j++)
			{
				A[j]=A[j]*mul;
				break;
			}
		}
	}
}

void Vector :: display()
{
	cout<<endl;
	cout<<"\tVector: "<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<"\t";
		cout<<A[i]<<endl;
		cout<<endl;
	}
}


int main()
{
	Vector v;
	int x;
	do
	{
		cout<<"\tOptions: "<<endl;
		cout<<"\t1.Create: "<<endl;
		cout<<"\t2.Modify: "<<endl;
		cout<<"\t3.Multiply: "<<endl;
		cout<<"\t4.Display: "<<endl;
		cout<<"\t5.Exit: "<<endl;
		cout<<"\tSELECT YOUR OPTION: "<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
			v.create();
			break;
			case 2:
			v.modify();
			v.display();
			break;
			case 3:
			v.multiply();
			v.display();
			break;
			case 4:
			v.display();
			break;
			case 5:
			cout<<"\tExiting!"<<endl;
			cout<<endl;
			exit(0);
			break;
		}
	}while(x!=6);
	
	return 0;
}
