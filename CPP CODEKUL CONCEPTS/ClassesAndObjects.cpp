#include<iostream>
using namespace std;

class MyClass {
    int a;			/*Private Member*/
    public:
        MyClass() {		/*Default Constructor*/
            a = 0;
            cout<<"\nIn constructor"<<endl;
        }
        MyClass(int b) {				/*Parametrised Constructor*/
            a = b;
            cout<<"\nIn parameterised constructor"<<endl;
        }
        MyClass(MyClass &obj) {				/*Copy Constructor Object 2 passes object 1 and  in constructor it recieves the 							address of private member 'a' of object 1*/
            a = obj.a;					/*Object 2's 'a' value will be equal to object 1's 'a' through the address*/
            cout<<"\nIn copy constructor"<<endl;
        }
        int setA(char c) {				/*Member Function for recieving a character input from object and returns the updated 								value to private member 'a' and replacing the value sent by parametrised constructor*/
            a = c;
            return a;
        }
        void setA(int b) {	/*Member Function for recieving a integer input from object and returns the updated value to private member 					'a' and replacing the value sent by parametrised constructor*/
            a = b;
	    cout<<"\nInteger Value: "<<endl; 
        }

        void setA() {
            a = 0;
        }
        
        void display() {		/*obj-number.display() will display value of private member 'a' for obj-number*/
            cout<<"a: "<<a<<endl;
        }
        
	int square_a();

        ~MyClass() 
	{
            cout<<"\nIn destructor - "<<a<<endl;
        }
};

int MyClass :: square_a() {
    int b = a*a;
    return b;
}

int main() {

	char ch='A';

    	MyClass obj1(10);/*Object 1 sends value of b=10*/
	obj1.display();
    
	MyClass obj2(obj1);/*Object 2 sets value of 'a' through objects 1 'a' using copy constructor*/
 	obj2.display();

    	obj1.setA(20);/*Object 1 sends value of b=20*/
	obj1.display();

	obj1.setA(ch);/*Object 1 sends value of ch='S"*/
	cout<<"\nCharacter: "<<obj1.setA(ch)<<endl;


    	cout<<"\nSquare: "<<obj2.square_a()<<endl;/*Object2's a=10 will be sent to member function 'int square_a()' and its square 'b' willbe 					   		 returned to main function to display*/

    	return 0;
}
