#include<iostream>
using namespace std;

class Employee {
    int id;
    double salary;
    double raise;
    public:
        Employee();
        Employee(int, double, double);
        void display();
        void set_id(int);
        void set_salary(double);
        void set_raise(double);
        int get_id();
        double get_salary();
        double get_raise();
        void do_increment();
};
Employee :: Employee() {
    id = 0;
    salary = 0.0;
    raise = 0.0;
}
Employee :: Employee(int id, double salary, double raise) {
    this->id = id;
    this->salary = salary;
    this->raise = raise;
}
void Employee :: display() {
    cout<<"Id: "<<id<<endl<<"Salary: "<<salary<<endl;
}
void Employee :: set_id(int id) {
    this->id = id;
}
void Employee :: set_salary(double salary) {
    this->salary = salary;
}
void Employee :: set_raise(double raise) {
    this->raise = raise;
}
int Employee :: get_id() { /*Goes to the address of private member after seting values and recieves the value and returns to display function*/
    return id;
}
double Employee :: get_salary() {
    return salary;
}
double Employee :: get_raise() {
    return raise;
}
void Employee :: do_increment() {
    salary += salary * raise;
}


int main() {
    Employee e1(1, 10000, 0.3);
    e1.display();
    e1.set_salary(9000.0);
    e1.display();
    e1.do_increment();
    e1.display();

    

    return 0;
}
