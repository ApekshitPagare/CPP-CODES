/*Create two classes DM and DB which store value of distances. DM stores distances in Metres and centimetres and DB in feet and inches.Write the  program that uses friend function and gives sum of twodistances either in meteres and enttemetres OR feet and inches*/
#include<iostream>
using namespace std;
class DB;


class DM
{
	double distance;
	public:
	DM();
	DM(double);
	int get_distance();
	friend int total_distance(DM,DB);
};

DM :: DM()
{
	distance=0.0;
}

DM :: DM(double distance)
{
	this->distance=distance;
}

int DM :: get_distance()
{
	return distance;
}



class DB
{
	double Distance;
	public:
	DB();
	DB(double);
	int get_Distance();
	friend int total_distance(DM,DB);
};

DB :: DB()
{
	Distance=0.0;
}

DB :: DB(double Distance)
{
	this->Distance=Distance;
}

int DB :: get_Distance()
{
	return Distance;
}	



int total_distance(DM obj1,DB obj2)
{
	return (obj1.get_distance() + (obj2.get_Distance()*3.281));
}


int main()
{
	double m=0.0;
	double f=0.0;
	cout<<"\n";
	cout<<"\tEnter First Distance in Meters:Centimeters : "<<endl;
	cin>>m;
	DM d(m);
	cout<<"\n";
	cout<<"\tEnter Second Distance in Foot:Inches : "<<endl;
	cin>>f;
	DB b(f);
	double SUM=0.0;
	SUM=total_distance(d,b);
	cout<<"\n";
	cout<<"\tSum of  distances in Metres: "<<endl;
	cout<<"\t"<<SUM<<" "<<"Metres"<<endl;
	cout<<"\n";
	return 0;
}

