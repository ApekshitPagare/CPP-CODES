/*MultiInheritance*/
/*WAP to create Super class and create subclass Manager and Developer and print thier details*/
/*Create  another class Company storing information of all Employees using Arrayof objects and create functions for salary,raise,hire,fire,promotions*/




#include<iostream>
using namespace std;

class Employee
{
	int id;
	double salary;
	double raise;

	public:

	Employee();

	Employee(int,double,double);

	void set_id(int);
	int get_id();

	void set_salary(double);
	int get_salary();
	
	void set_raise(double);
	int get_raise();
	
	void DoPromotion();
	void display();
};

Employee :: Employee()
{
	id=0;
	salary=0.0;
	raise=0.0;
}

Employee :: Employee(int id,double salary,double raise)
{
	this->id=id;
	this->salary=salary;
	this->raise=raise;
}

int Employee :: get_id()
{
	return id;
}

int Employee :: get_salary()
{
	return salary;
}

int Employee :: get_raise()
{
	return raise;
}

void Employee :: DoPromotion()
{
	salary = salary+(salary*raise);
}

void Employee :: display()
{
	cout<<"\n";
	cout<<"\tID: "<<get_id()<<endl;
	cout<<"\tSalary: "<<get_salary()<<endl;
	cout<<"\tRaise: "<<get_raise()<<endl;
}








class Manager : public Employee
{
	int Id;

	public:

	Manager();
	Manager(int,double,double,int);

	void set_Id(int);
	int get_Id();

	void Display();
};

Manager :: Manager()
{
	Id=0;
}

Manager :: Manager(int id,double salary,double raise,int Id) : Employee(id,salary,raise)
{
	this->Id=Id;
}

int Manager :: get_Id()
{
	return Id;
}

void Manager :: Display()
{
	cout<<"\n";
	Employee :: display();
	cout<<"\tS.ID: "<<get_Id()<<endl;
}







class Developer : public Employee
{
	int ID;

	public:

	Developer();
	Developer(int,double,double,int);

	void set_ID(int);
	int get_ID();

	void DISPLAY();
};

Developer :: Developer()
{
	ID=0;
}

Developer :: Developer(int id,double salary,double raise,int Id) : Employee(id,salary,raise)
{
	this->ID=ID;
}

int Developer :: get_ID()
{
	return ID;
}

void Developer :: DISPLAY()
{
	cout<<"\n";
	Employee :: display();
	cout<<"\tS.ID: "<<get_ID()<<endl;
}




class Office
{
	int iD;
	Employee employees[10];
	int count=0;
	
	public:

	Office();
	Office(int);

	void set_iD(int);
	int get_iD();

	void hire(Employee);

	void fire(Employee);

	void promotion(Employee);
	
	void ShowEmployees();
};

Office :: Office()
{
	iD=0;
	count=0;
}

Office :: Office(int iD)
{
	this->iD=iD;
	count=0;
}

void Office :: set_iD(int iD)
{
	this->iD=iD;
}

int Office :: get_iD()
{
	return iD;
}

void Office :: hire(Employee employee)
{
	int found=0;
	for(int i=0;i<count;i++)
	{
		if(employee.get_id()==employees[i].get_id())
		{
			found=0;
		}
	}
	if(found==1 && count<10)
	{
		employees[count]=employee;
		count++;
	}
}

void Office :: fire(Employee employee)
{
	int index=0;
	for(int i=0;i<count;i++)
	{
		if(employees[i].get_id()==employee.get_id())
		{
			for(index=i;index<count;index++)
			{
				employees[index]=employees[index+1];
			}
		count--;
		}
	}
}

void Office :: promotion(Employee employee)
{
	int i=0;
	for(i=0;i<count;i++)
	{
		if(employee.get_id()==employees[i].get_id())
		{
			employees[i].DoPromotion();
		}
	}
}

void Office :: ShowEmployees()
{
	int i=0;
	for(i=0;i<count;i++)
	{
		employees[i].display();
	}
}


int main()
{
	Office o(1);
	Manager m(1,100.0,0.5,1);
	Developer d(2,200.0,1.0,2);
	int x=0;
	do
	{
		cout<<"\n";
		cout<<"\tOptions: "<<endl;
		cout<<"\t1.Add Manager"<<endl;
		cout<<"\t2.Add Developer"<<endl;
		cout<<"\t3.Fire Manager"<<endl;
		cout<<"\t4.Fire Developer"<<endl;
		cout<<"\t5.Display Details"<<endl;
		cout<<"\t6.Promote Manager"<<endl;
		cout<<"\t7.Promote Developer"<<endl;
		cout<<"\t8.Exit"<<endl;
		cout<<"\tSelect Your Option: "<<endl;
		cin>>x;
	
		switch(x)
		{
			case 1:
			o.hire(m);
			break;
			
			case 2:
			o.hire(d);
			break;
		
			case 3:
			o.fire(m);
			break;
			
			case 4:
			o.fire(d);
			break;

			case 5:
			o.ShowEmployees();
			break;

			case 6:
			o.promotion(m);
			break;
			
			case 7:
			o.promotion(d);
			break;

			case 8:
			cout<<"\n";
			cout<<"\tExiting!"<<endl;
			exit(0);
			break;
		}
	}while(x!=9);

	return 0;
}
