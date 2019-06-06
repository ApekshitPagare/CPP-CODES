/*Calculation of Integers and Floats*//*Templates accept any data type,converts to its form and calculates,thus reducing number of functions*/
#include<iostream>
using namespace std;

template <class T>		/*Template Defination*/		
				/*int a,int b or float c,float d converted to 'n1'and 'n2' of generic data type 'T'*/
T ADD(T n1,T n2)		/*Member function of generic data type 'T'*/
{
    return n1 + n2; 		/*Returns to main functions when called during display*/
}
template <class T>
T SUB(T n1, T n2)
{
    return n1 - n2;
}
template <class T>
T MUL(T n1,T n2)
{
    return n1 * n2;
}
template <class T>
T DIV(T n1,T n2)
{
    return n1 / n2;
}

int main()
{
	int a;
	int b;
	float c;
	float d;
	
	cout<<"Enter the 2 Integers: "<<endl;
	cin>>a>>b;

	cout<<"Enter the 2 Float Numbers: "<<endl;
	cin>>c>>d;

    	cout <<"\nINTEGER ADD " <<ADD(a,b) << endl;	/*Parameters sent to template,and recieve the result*/
    	cout <<"INTEGER SUB " << SUB(a,b) << endl;
    	cout <<"INTEGER MUL " << MUL(a,b) << endl;
    	cout <<"INTEGER DIV " << DIV(a,b) << endl;

    
       	cout <<"\nFloat ADD " <<ADD(a,b) << endl;
    	cout <<"Float SUB " << SUB(a,b) << endl;
   	cout <<"Float MUL " << MUL(a,b) << endl;
   	cout <<"Float DIV " << DIV(a,b) << endl;

  
    return 0;
}
/*Generic Data type is basically temperory data type converted from original data type of objects sent from main function,T is genereic template data type which is used in calculations and then returned and converted back to original data type*/
