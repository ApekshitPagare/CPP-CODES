#include<iostream>
using namespace std;

class OverloadingExample {  
    int a;
    double b;
    char c;
    public:
        OverloadingExample();                                                  /*Default Constructor*/
        OverloadingExample(int, double, char);				       /*Parametarised CONSTRUCTOR*/
        void set(int);								
        void set(double);
        void set(char);
        void set(int, double, char);
        void display();
};

OverloadingExample :: OverloadingExample() {					/*Default Values to NULL*/
    this->a = 0;
    this->b = 0.0;
    this->c = 0;
}

OverloadingExample :: OverloadingExample(int a, double b, char c) {             /*Set values from object in main function*/
    this->a = a;
    this->b = b;
    this->c = c;
}

void OverloadingExample :: set(int a) {						/*If initialised using object thenn it replaces the value of 											private member 'a' to new value send to this member function*/ 
    this->a = a;
}

void OverloadingExample :: set(double b) {					/*SAME*/
    this->b = b;
}

void OverloadingExample :: set(char c) {					/*SAME*/
    this->c = c;
}

void OverloadingExample :: set(int a, double b, char c) { 			/*SAME*/
    this->a = a;
    this->b = b;
    this->c = c;
}

void OverloadingExample :: display() {
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
}

int main() {
    OverloadingExample ex1(100, 10.30, 'C');
    ex1.set(10);
    ex1.display();
    ex1.set(5.5);	
    ex1.display();
    ex1.set('D');
    ex1.display();
    ex1.set(50000,5.34,'P');
    ex1.display();

    return 0;
}

/*Function name is same but parameters changes=FUNCTION OVERLOADING*/
