/*MultiInheritance*/
/*WAP to create Super class and create subclass Manager and Developer and print thier details*/
/*Create  another class Company storing information of all Employees using Arrayof objects and create functions for salary,raise,hire,fire,promotions*/

#include<iostream>
using namespace std;

class Employee /*Super Class 1*/
{
    int id;
    double salary;
    double raise;

    public :
        Employee();
        Employee(int,double,double);
        void display();
        void setId(int);
        void setSalary(double);
        void setRaise(double);
        int getId();
        double getSalary();
        double getRaise();
        void doIncreament();
};

Employee :: Employee()
{
    id = 0;
    salary = 0;
    raise = 0;
}

Employee :: Employee(int id , double salary , double raise)
{
    this -> id = id;
    this -> salary = salary;
    this -> raise = raise;
}

void Employee :: display()
{
    cout<<id<<endl;
    cout<<salary<<endl;
}

void Employee :: setId(int id)
{
    this -> id = id;
}

void Employee :: setSalary(double)
{
    this -> salary = salary;
}

void Employee :: setRaise(double raise)
{
    this -> raise = raise;
}

int Employee :: getId()
{
    return id;
}

double Employee :: getSalary()
{
    return salary;
}

double Employee :: getRaise()
{
    return raise;
}

void Employee :: doIncreament()/*No need for this pointer as private memebrs and member functions are of same class*/
{
    salary += salary * raise ;
}

class Developer : public Employee/*Derived Class 1*/
{
    int desk_id;
    public:
        Developer();
        Developer(int, double, double, int);
        void set_desk_id(int);
        int get_desk_id();
        void display();
};
Developer :: Developer() {
    desk_id = 0;
}
Developer :: Developer(int id, double salary, double raise, int desk_id) : Employee(id, salary, raise) {
    this->desk_id = desk_id;
}
void Developer :: set_desk_id(int desk_id) {
    this->desk_id = desk_id;
}
int Developer :: get_desk_id() {
    return desk_id;
}
void Developer :: display()
{
    Employee :: display();
    cout<<"Desk Id: "<<desk_id<<endl;
}

class Manager : public Employee {/*Derived Class 2*/
    int cabin_id;
    public:
        Manager();
        Manager(int, double, double, int);
        void set_cabin_id(int);
        int get_cabin_id();
        void display();
};
Manager :: Manager() {
    cabin_id = 0;
}
Manager :: Manager(int id, double salary, double raise, int cabin_id) : Employee(id, salary, raise) {
    this->cabin_id = cabin_id;
}
void Manager :: set_cabin_id(int cabin_id) {
    this->cabin_id = cabin_id;
}
int Manager :: get_cabin_id() {
    return cabin_id;
}
void Manager :: display() {
    Employee :: display();
    cout<<"Cabin Id: "<<cabin_id<<endl;
}

class Company	/*Indivisual Class*/
{
    int id;
    Employee employees[10];/*Array of Type 'Employee' as class Employee will store all the details*/
    int count = 0;
    public :
        Company();
        Company(int);
        void hire(Employee);
        void fire(Employee);
        void doPramotion(Employee);
        int getId();
        void setId(int);
        void showEmployees();
};

Company :: Company()
{
    id = 0;
    count = 0;
}

Company :: Company(int id)
{
    this -> id = id;
    count = 0;
}

int Company :: getId()
{
    return id;
}

void Company :: setId(int id)
{
    this -> id = id;
}

void Company :: showEmployees()/*Display Only Class Employee display()*/
{
    for (int i = 0; i < count; i++)
    {
        employees[i].display();
    }
}

void Company :: hire(Employee employee)/*Object will be converted to type Employee to Access the Super class and check if this employee id 						matches the ones in the Array*/
{
    int found=1;
    for (int i = 0; i < count; i++)
    {
        if(employee.getId() == employees[i].getId())
        {
            found=0;
        }
    }
    if(found==1 && count < 10)
    {
        employees[count] = employee;
        count++;
    }
    else
    {
        cout<<"Invalid Id! OR Hiring Limit Reached!"<<endl;
    }
}

void Company :: fire(Employee employee)
{
    for (int i = 0; i < count; i++)
    {
        if(employees[i].getId() == employee.getId())
        {
            for (int a = i; a <= count; a++)
            {
                employees[a] = employees[a + 1];
            }
            count--;
        }
    }
}

void Company :: doPramotion(Employee employee)
{
    for (int i = 0; i < count; i++)
    {
        if(employee.getId() == employees[i].getId())
        {
            employees[i].doIncreament();
        }
    }
}

int main()
{
    Company c1(1);
     
    Developer d1(1,2000.0,0.5,1);
    Manager m1(2,3000.0,0.5,2);
    
    c1.hire(d1);
    c1.hire(m1);
    cout<<"Hiring d1 & m1\n";
    c1.showEmployees();
    
    c1.fire(d1);
    cout<<"After Firing d1\n";
    c1.showEmployees();
    
    Developer d2(1,4000,0.3,1);
    c1.hire(d2);
    cout<<"Hiring d2\n";
    
    c1.showEmployees();
    
    c1.doPramotion(d2);
    c1.doPramotion(m1);
    
    cout<<"After Promoting\n";
    c1.showEmployees();
    c1.doPramotion(d1);
    
    cout<<"After Promoting d1\n";
    c1.showEmployees();
    return 0;
}
