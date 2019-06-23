/*Define A Class To Represent Bank Account. Include the  Members-
Data Members

1.Name of Depositers
2.Account Number
3.Type of Account
4.Balance Amount

Member Functions
1.To Assign Initial values
2.To deposit an amount
3.To withdraw a amount after checking balance
4.To Display Name and Balance*/


#include<iostream>
using namespace std;


class Customer
{
	int id;
	const char *N;
	int AccN;
	const char *T;
	double Balance;
	public:
	Customer();
	Customer(int,const char *,int,const char *,double);

	void setid(int);
	int getid();

	void setN(char *);
	const char * getN();

	void setAccN(int);
	int getAccN();

	void setType(char *);
	const char * getType();

	void setBalance(double);
	int getBalance();

	void display();
	void Deposit();
	void Withdraw();
};

Customer :: Customer()
{
	id=0;
	N="";
	AccN=0;
	T="";
	Balance=0.0;
}

Customer :: Customer(int id,const char *N,int AccN,const char *T,double Balance)
{
	this->id=id;
	this->N=N;
	this->AccN=AccN;
	this->T=T;
	this->Balance=Balance;
}

void Customer :: setid(int id)
{
	this->id=id;
}

int Customer :: getid()
{
	return id;
}

void Customer :: setN(char *N)
{
	this->N=N;
}

const char * Customer :: getN()
{
	return N;
}

void Customer :: setAccN(int AccN)
{
	this->AccN=AccN;
}

int Customer :: getAccN()
{
	return AccN;
}

void Customer :: setType(char *T)
{
	this->T=T;
}

const char * Customer :: getType()
{
	return T;
}

void Customer :: setBalance(double Balance)
{
	this->Balance=Balance;
}

int Customer :: getBalance()
{
	return Balance;
}

void Customer :: display()
{
	cout<<"\n";
	cout<<"\tId: "<<getid()<<endl;
	cout<<"\tName: "<<getN()<<endl;
	cout<<"\tAccount Number: "<<getAccN()<<endl;
	cout<<"\tType: "<<getType()<<endl;
	cout<<"\tBalance: "<<getBalance()<<endl;
	cout<<"\n"<<endl;
}
void Customer :: Deposit()
{
	double amount;
	cout<<"\tEnter Amount to Deposit: "<<endl;
	cin>>amount;
	Balance=Balance+amount;
}

void Customer :: Withdraw()
{
	double amount;
	cout<<"\tEnter Amount to withdraw: "<<endl;
	cin>>amount;
	Balance=Balance-amount;
}






class Male : public Customer
{
	int Id;
	public:
	Male();
	Male(int,const char *,int,const char *,double,int);
	void setId(int);
	int getId();
	void Display();
};

Male :: Male()
{
	Id=0;
}

Male :: Male(int id,const char *N,int AccN,const char *T,double Balance,int Id) : Customer(id,N,AccN,T,Balance)
{
	this->Id=Id;
}

void Male :: setId(int Id)
{
	this->Id=Id;
}

int Male :: getId()
{
	return Id;
}

void Male :: Display()
{
	Customer::display();
	cout<<"\tID: "<<getId()<<endl;
	cout<<"\n";
} 





class Female : public Customer
{
	int ID;
	public:
	Female();
	Female(int,const char *,int,const char *,double,int);
	void setID(int);
	int getID();
	void DIsplay();
};

Female :: Female()
{
	ID=0;
}

Female :: Female(int id,const char *N,int AccN,const char *T,double Balance,int ID) : Customer(id,N,AccN,T,Balance)
{
	this->ID=ID;
}

void Female :: setID(int ID)
{
	this->ID=ID;
}

int Female :: getID()
{
	return ID;
}

void Female :: DIsplay()
{
	Customer::display();
	cout<<"\tID: "<<getID()<<endl;
	cout<<"\n";
} 





class Bank
{
	int IDD;
	int count=0;
	Customer customers[5];
	public:
	Bank();
	Bank(int);
	void Add(Customer);
	void DepositMoney(Customer);
	void WithdrawMoney(Customer);
	void DISPLAY(Customer);
};

Bank :: Bank()
{
	IDD=0;
	count=0;
}
Bank :: Bank(int IDD)
{
	this->IDD=IDD;
	count=0;
}

void Bank :: Add(Customer customer)
{
	int found=1;
	for(int i=0;i<count;i++)
	{
		if(customer.getid()==customers[i].getid())
		{
			found=0;
		}
	}
	if(found=1 && count<5)
	{
		customers[count]=customer;
		count++;
	}
}

void Bank :: DepositMoney(Customer customer)
{
	int i; 
	for(i=0;i<count;i++)
	{
		if(customer.getid()==customers[i].getid())
		{
			customers[i].Deposit();
			customers[i].display();
			break;
		}
	}
}

void Bank :: WithdrawMoney(Customer customer)
{
	int i; 
	for(i=0;i<count;i++)
	{
		if(customer.getid()==customers[i].getid())
		{
			if(customers[i].getBalance()<=0)
			{
				cout<<"\tNo Balance"<<endl;
				cout<<"\n";
				break;
			}
			else
			{
				customers[i].Withdraw();
				customers[i].display();
				break;
			}
		}
	}
}

void Bank :: DISPLAY(Customer customer)
{
	int i;
	for(i=0;i<count;i++)
	{
		if(customer.getid()==customers[i].getid())
		{
			customers[i].display();
		}
	}
}


int main()
{
	Bank b(1);
	Male m(1,"Apekshit",1,"Savings",10.0,1);
	Female f(2,"Swati",2,"Savings",20.0,2);
	int x=0;
	do
	{
		cout<<"\tOptions: "<<endl;
		cout<<"\t1.Add Male Customer"<<endl;
		cout<<"\t2.Add Female Customer"<<endl;
		cout<<"\t3.Withdraw Money from Male Account"<<endl;
		cout<<"\t4.Deposit Money From Male Account"<<endl;
		cout<<"\t5.Withdraw Money from Female Account"<<endl;
		cout<<"\t6.Deposit Money From Female Account"<<endl;
		cout<<"\t7.Exit"<<endl;
		cout<<"\tSelect Your Option: "<<endl;
		cin>>x;
		switch(x)
		{
			case 1:
			b.Add(m);
			b.DISPLAY(m);
			break;
			case 2:
			b.Add(f);
			b.DISPLAY(f);
			break;
			case 3:
			b.WithdrawMoney(m);
			break;
			case 4:
			b.DepositMoney(m);
			break;
			case 5:
			b.WithdrawMoney(f);
			break;
			case 6:
			b.DepositMoney(f);
			break;
			case 7:
			cout<<"\tExiting! Thank You!"<<endl;
			exit(0);
			break;
		}
	}while(x!=8);
	return 0;
}
