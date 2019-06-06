#include<iostream>
using namespace std;

class OverloadingExample {
    int a;			/*Private Members*/
    float b;
    char c;
    public:
        OverloadingExample();	/*Default Constructors*/
        OverloadingExample(int, float, char);/*Parametrised Constructors*/
        void set(int);	/*Member Functions*/
        void set(float);
        void set(char);
        void set(int, float, char);
        void display();
};

OverloadingExample :: OverloadingExample() {/*Setting NUll Values in default Constructor*/
    this->a = 0;
    this->b = 0.0;
    this->c = 0;
}

OverloadingExample :: OverloadingExample(int a, float b, char c) {/*Setting Parametrised Values to private Members*/
    this->a = a;
    this->b = b;
    this->c = c;
}

void OverloadingExample :: set(int a) {/*After Setting Updates the existing private member Values*/
    this->a = a;
    cout<<"int"<<endl;
}

void OverloadingExample :: set(float b) {
    this->b = b;
    cout<<"float"<<endl;
}

void OverloadingExample :: set(char c) {
    this->c = c;
    cout<<"char"<<endl;
}

void OverloadingExample :: set(int a, float b, char c) {
    this->a = a;
    this->b = b;
    this->c = c;
    cout<<"int, float, char"<<endl;
}

void OverloadingExample :: display() {
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
}

int main() {
    OverloadingExample ex1(100, 10.30, 'C');
    ex1.set(10);
    ex1.display();
    return 0;
}
