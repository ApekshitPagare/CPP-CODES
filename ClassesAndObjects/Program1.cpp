#include<iostream>
using namespace std;

class SHOP 	/*Declare a Class*/
{
	int itemCode[50];	/*Create An Array of MAX SIZE 50*/
	int itemPrice[50];
	int count;
	public:
	void CNT()	/*Function to Initialise count to 0*/
	{
		count=0;
	}
	void getItem(void);
	void displaySUM(void);
	void displayItem(void);
	void displayALL(void);
	void remove(void);
};
void SHOP::getItem(void)
{
	cout<<"Enter Item Code: "<<endl;   /*Adds item code to 0th position*/
	cin>>itemCode[count];
	cout<<"Enter Item Price: "<<endl;/*Adds item price to 0th position*/
	cin>>itemPrice[count];
	count++;		/*As objects keep on sending count++*/
				/*Each Array will store Numbers that determine objects code and price*/
}

void SHOP::displaySUM(void)
{
	int i=0;
	float sum=0;
	for(i=0;i<count;i++)
	{
		sum=sum+itemPrice[i];	/*Keeps adding SUM that is price stored at each array index*/
	}
	cout<<"\n";
	cout<<"Total Sum: "<<sum<<endl;
	cout<<"\n";
}

void SHOP::displayItem(void)
{
	int a;
	int i=0;
	cout<<"Enter The Code of Item You want to find: "<<endl;
	cin>>a;
	for(i=0;i<count;i++)
	{
		if(itemCode[i]==a)
		{
			cout<<"Item "<<i+1<<endl;
			cout<<"Item Code: "<<itemCode[i]<<endl;
			cout<<"Item Price: "<<itemPrice[i]<<endl;
		}
	}
	cout<<"\n";
}
void SHOP::displayALL(void)
{
	int i=0;
	for(i=0;i<count;i++)
	{
		cout<<"Item "<<i+1<<endl;
		cout<<"Item Code: "<<itemCode[i]<<endl;
		cout<<"Item Price: "<<itemPrice[i]<<endl;
	}
	cout<<"\n";
}
void SHOP::remove(void)
{
	int i=0;
	int r=0;
	cout<<"Enter The Code of Item You want to Remove: "<<endl;
	cin>>r;
	for(i=0;i<count;i++)
	{
		if(itemCode[i]==r)
		{
			itemPrice[i]=0;
		}
	}
}

int main()
{
	
	SHOP s;	/*Create object 's' of class SHOP*/
	int x=0;
	do		/*SWITCH CASE*/
	{
		cout<<"Your Options: "<<endl;
		cout<<"1.Add A Item: "<<endl;	
		cout<<"2.Display A Item: "<<endl;	
		cout<<"3.Display All Items: "<<endl;	
		cout<<"4.Display Bill: "<<endl;	
		cout<<"5.Remove A Item: "<<endl;
		cout<<"6.Quit"<<endl;
	
		cout<<"\nSelect Your Choice: "<<endl;
		cin>>x;

		switch(x)
		{
			case 1:
			s.getItem();/*USED SAME OBJECT WITH DIFFRENT ARRAY NUMBERS ABOVE*/
			break;
			case 2:
			s.displayItem();
			break;
			case 3:
			s.displayALL();
			break;
			case 4:
			s.displaySUM();
			break;
			case 5:
			s.remove();
			s.displayALL();
			s.displaySUM();
			break;
			case 6:
			exit(0);
			break;
		}
	}while(x!=5);

	return 0;
}
