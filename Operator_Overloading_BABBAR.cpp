// Demonstrating the Operator Overloading 
#include<iostream>

using namespace std;
class Hero{

    public : 
    int a, b;

    public:
    // Syntax of Operator Overloading
    void operator + (Hero &h){
        int val1 = this->a;
        int val2 = h.a;
        cout<<"Addition : "<<val1 + val2<<endl;
        cout<<"Subtraction : "<<val1 - val2<<endl;
        cout<<"Multiplication : "<<val1 * val2<<endl;
    }

    void operator() (){

        cout<<"Operator Braces is called "<<endl;
    }

    void operator / (Hero &h){

        int val1 = this-> a;
        int val2 = h.a;
        cout<<"Operator Division is called "<<endl;
        cout<<"Division : "<<val1/val2<<endl;
    }
};
int main()
{
    Hero h1, h2;
    h1.a = 10;
    h2.a = 5;

    h1 + h2; // '+' Operator object is called

    h1(); // '()' Operator object is called

    h1 / h2; // '/' Operator object is called
    
    return 0;
}