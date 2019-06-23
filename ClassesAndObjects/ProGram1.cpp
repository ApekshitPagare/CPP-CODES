/*ADD FOOD AND DRINK IN SHOP PROGRAM*/
#include<iostream>
using namespace std;
/*SUPER CLASS*/
class ITEMS
{
	int id;
	double price;
	public:
	ITEMS();
	ITEMS(int,double);
	int get_id();
	int get_price();
	void display();

	
};

ITEMS :: ITEMS()
{
	id=0;
	price=0;
}

ITEMS :: ITEMS(int id,double price)
{
	this->id=id;
	this->price=price;
}
int ITEMS :: get_id()
{
	return id;
}
int ITEMS:: get_price()
{
	return price;
}
void ITEMS :: display()
{
	cout<<"\tCart: "<<endl;
	cout<<"\tID: "<<get_id()<<endl;
	cout<<"\tPRICE: "<<get_price()<<endl;
}


/*DERIVED CLASS 1*/
class FOOD : public ITEMS
{
	int Id;
	public:
	FOOD();
	FOOD(int,double,int);
	int get_Id();
	void display();
};

FOOD :: FOOD()
{
	Id=0;
}

FOOD :: FOOD(int id,double price,int Id) : ITEMS(id,price)
{
	this->Id=Id;
	
}
int FOOD :: get_Id()
{
	return Id;
}
void FOOD :: display()
{
	ITEMS :: display();
	cout<<"S.ID: "<<get_Id()<<endl;
}
	


/*DERIVED CLASS 2*/
class DRINK : public ITEMS
{
	int ID;
	public:
	DRINK();
	DRINK(int,double,int);
	int get_ID();
	void display();
};

DRINK :: DRINK()
{
	ID=0;
}

DRINK :: DRINK(int id,double price,int ID) : ITEMS(id,price)
{
	this->ID=ID;
	
}
int DRINK :: get_ID()
{
	return ID;
}
void DRINK :: display()
{
	ITEMS :: display();
	cout<<"S.ID: "<<get_ID()<<endl;
}


/*Seperate Class*/

class SHOP
{
	int iD;
	ITEMS items[10];
	int count;
	public:
	SHOP();
	SHOP(int);
	
	//void count();	
	void addItem(ITEMS);
	void removeItem(ITEMS);
	void displayALL();	
	void displaySUM();
};

SHOP :: SHOP()
{
	iD=0;
}

SHOP :: SHOP(int iD)
{
	this->iD=iD;
	count=0;
}

/*void SHOP::count()
{
	count=0;
}
*/
void SHOP :: addItem(ITEMS item)
{
	int i=0;
	int found=1;
	for(i=0;i<count;i++)
	{
		if(item.get_id()==items[i].get_id())
		{
			found=0;
		}
	}
	if(found==1 && count<10)
	{
		items[count]=item;
		count++;
		cout<<"\tItem ADDED SUCCESSFULLY"<<endl;
		cout<<"\n";
	}
	else
	{
		cout<<"\tInvalid"<<endl;
	}
	
}

void SHOP :: removeItem(ITEMS item)
{
	int i=0;
	int a=0;
	for(i=0;i<count;i++)
	{
		if(items[i].get_id()==item.get_id())
		{
			for(a=i;a<=count;a++)
			{
				items[a]=items[a+1];
			}
		count--;
		}
	}
}



void SHOP :: displaySUM()
{
	int i=0;
	double sum;
	for(i=0;i<count;i++)
	{
		sum=sum+items[i].get_price();
	}
	cout<<"\tTotal Bill: "<<sum<<endl;
	cout<<endl;
}

void SHOP :: displayALL()
{
	int i=0;
	for(i=0;i<count;i++)
	{
		items[i].display();
	}
	cout<<"\n";
}


	
int main()
{
	int i;
	//ITEMS a(1,5.5);
	//a.display();
	SHOP s(1);
	FOOD f(2,6.6,5);
	DRINK d(3,7.7,6);
	int x=0;
	do		
	{
		cout<<"Your Options: "<<endl;
		cout<<"1.Add A FOOD Item: "<<endl;
		cout<<"2.Add A DRINK Item: "<<endl;		
		cout<<"3.Display All Items: "<<endl;	
		cout<<"4.Display Bill: "<<endl;	
		cout<<"5.Remove A FODD Item: "<<endl;
		cout<<"6.Remove A DRINK Item: "<<endl;
		cout<<"7.Quit"<<endl;
	
		cout<<"\nSelect Your Choice: "<<endl;
		cin>>x;

		switch(x)
		{

			case 1:
			s.addItem(f);
			break;

			case 2:
			s.addItem(d);
			break;
			
			case 3:
			s.displayALL();
			break;
			
			case 4:
			s.displaySUM();
			break;

			case 5:
			s.removeItem(f);
			s.displayALL();
			s.displaySUM();
			break;
			
			case 6:
			s.removeItem(d);
			s.displayALL();
			s.displaySUM();
			break;
			
			case 7:
			exit(0);
			break;
		}
	}while(x!=8);
	return 0;
}	
