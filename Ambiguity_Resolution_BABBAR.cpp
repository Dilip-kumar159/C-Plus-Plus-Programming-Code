// Demonstrating the Ambiguity Resolution occurs in inheritance.
#include<iostream>

using namespace std;

class Animal{

    public: 
    void eat(){
        cout<<"Eating...."<<endl;
    }
};

class Dog{

    public : 
    void eat(){
        cout<<"Eating... Pedigree"<<endl;
    }
};

class cat : public Animal, public Dog{


};
int main()
{
    cat c;
    c.Animal::eat(); // Inorder to print eat func() we need to use Scope Resolution operator.
    c.Dog::eat();

    return 0;
}