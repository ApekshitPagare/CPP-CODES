/*Single Inheritance*/
/*Write A program to create vehicle class and get properties such as  color,top speed,capacity,speed,fuel_capacity,fuel level,write functions for set fuel level,speed,speed up and  speed down,accelerate,apply breaks,turn left turn right,refill fuel,display*/

#include<iostream>
using namespace std;

class Vehicle
{
	char color[50];
	int top_speed;
	int speed;
	double fuel_capacity;
	double fuel_level;

	public:

	Vehicle();
//	Vehicle(const char*,int,int,double,double);
	void get_data();

	void set_color(char);
	char get_color();

	void set_topspeed(int);
	int get_topspeed();

	void set_speed(int);
	int get_speed();
	
	void set_fuelCapacity(double);
	int get_fuelCapacity();

	void set_fuelLevel(double);
	int get_fuelLevel();

	void speedup();
	void speeddown();
	void accelarate();
	void apply_brakes();
	void turn_left();
	void turn_right();
	void refill_fuel();
	void display();
};

Vehicle :: Vehicle()
{
	top_speed=0;
	speed=0;
	fuel_capacity=0.0;
	fuel_level=0.0;
}

//Vehicle :: Vehicle(const char *color,int top_speed,int speed,double fuel_level,double fuel_capacity)
//{
//	this->color=color;
//	this->top_speed=top_speed;
//	this->speed=speed;
//	this->fuel_capacity=fuel_capacity;
//	this->fuel_level=fuel_level;
//}

void Vehicle :: speedup()
{
	if(speed>=top_speed)
	{
		cout<<"\n";
		cout<<"\tMax Speed Reached"<<endl;
		cout<<"\n";
	}
	else
	{
		speed++;
	}
}

void Vehicle :: speeddown()
{
	if(speed<=0)
	{
		cout<<"\n";
		cout<<"\tVehicle is Stationary"<<endl;
		cout<<"\n";
	}
	else
	{
		speed--;
	}
}

void Vehicle :: accelarate()
{
	cout<<"\n";
	cout<<"\tSpeed Before Accelaration: "<<speed<<" KM/HR"<<endl;
	int count=0;
	cout<<"\tEnter By How Many Kilometres/Hour to Increase Speed: "<<endl;
	cin>>count;
	cout<<"\n";
	for(int i=0;i<=count;i++)
	{
		speedup();
	}
	cout<<"\tSpeed: "<<speed<<" KM/HR"<<endl;
	cout<<"\n";
}
void Vehicle :: apply_brakes()
{
	cout<<"\n";
	cout<<"\tSpeed Before Applying Brakes: "<<speed<<" KM/HR"<<endl;
	int count=0;
	cout<<"\tEnter By How Many Kilometres/Hour to Decrease Speed: "<<endl;
	cin>>count;
	cout<<"\n";
	for(int i=0;i<=count;i++)
	{
		speeddown();
	}
	cout<<"\tSpeed: "<<speed<<" KM/HR"<<endl;
	cout<<"\n";
}

void Vehicle :: turn_right()
{
	cout<<"\n";
	cout<<"\tVehicle Turning Right"<<endl;
}

void Vehicle :: turn_left()
{
	cout<<"\n";
	cout<<"\tVehicle Turning Left"<<endl;
}


/*void Vehicle :: set_color(char color)
{
	this->color=color;
}

void Vehicle :: set_topspeed(int top_speed)
{
	this->top_speed=top_speed;
}

void Vehicle :: set_speed(int speed)
{
	this->speed=speed;
}

void Vehicle :: set_fuelCapacity(double fuel_capacity)
{
	this->fuel_capacity=fuel_capacity;
}

void Vehicle :: set_fuelLevel(double fuel_level)
{
	this->fuel_level=fuel_level;
}

char Vehicle :: get_color()
{
	return color;
}

int Vehicle :: get_topspeed()
{
	return top_speed;
}

int Vehicle :: get_speed()
{
	return speed;
}

int Vehicle :: get_fuelCapacity()
{
	return fuel_capacity;
}

int Vehicle :: get_fuelLevel()
{
	return fuel_level;
}*/

void Vehicle :: refill_fuel()
{
	double fuel=0.0;
	cout<<"\n";
	cout<<"\tEnter the Number of litres to refill the fuel: "<<endl;
	cin>>fuel;
	if(fuel_level==fuel_capacity)
	{
		cout<<"\tFuel Tank Full"<<endl;
	}
	else if(fuel_level+fuel>fuel_capacity)
	{
		cout<<"\tBeyond Fuel Capacity"<<endl;
	}
	else
	{
		fuel_level=fuel_level+fuel;
		if(fuel_level>fuel_capacity)
		{
			cout<<"\tBeyond Fuel Capacity"<<endl;
			cout<<"\n";
		}
		else
		{
			cout<<"\tFuel Level: "<<fuel_level<<" Litres"<<endl;
			cout<<"\n";
		}
	}
}

void Vehicle :: display()
{
	cout<<"\n";
	cout<<"\tYour Vehicle Details: "<<endl;
	cout<<"\tColor: "<<color<<endl;
	cout<<"\tTop Speed: "<<top_speed<<endl;
	cout<<"\tSpeed: "<<speed<<endl;
	cout<<"\tFuel Level: "<<fuel_level<<endl;
	cout<<"\tFuel Capacity: "<<fuel_capacity<<endl;
	cout<<"\n";
}
void Vehicle :: get_data()
{
	cout<<"\tColor: "<<endl;
	cin>>color;
	cout<<"\tTop Speed: "<<endl;
	cin>>top_speed;
	cout<<"\tSpeed: "<<endl;
	cin>>speed;
	cout<<"\tFuel Level: "<<endl;
	cin>>fuel_level;
	cout<<"\tFuel Capacity: "<<endl;
	cin>>fuel_capacity;
	cout<<"\n";
}

int main()
{
	Vehicle V;
	int x=0;
	do
	{
		cout<<"\tOptions: "<<endl;
		cout<<"\t1.Input Car Details"<<endl;
		cout<<"\t2.Display"<<endl;
		cout<<"\t3.Accelarate"<<endl;
		cout<<"\t4.Apply Brakes"<<endl;
		cout<<"\t5.Turn Right"<<endl;
		cout<<"\t6.Turn Left"<<endl;
		cout<<"\t7.Refill Fuel"<<endl;
		cout<<"\t8.Exit"<<endl;
		cout<<"\n";
		cout<<"\tSelect Your Choice: "<<endl;
		cin>>x;

		switch(x)
		{
			case 1:
			V.get_data();
			break;

			case 2:
			V.display();
			break;
			
			case 3:
			V.accelarate();
			break;

			case 4:
			V.apply_brakes();
			break;

			case 5:
			V.turn_right();
			break;
		
			case 6:
			V.turn_left();
			break;

			case 7:
			V.refill_fuel();
			break;

			case 8:
			cout<<"\n";
			cout<<"\tExiting!"<<endl;
			exit(0);
			break;
		}
	}while(x!=8);
	
	return 0;
}		
