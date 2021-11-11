// Creating a Default Constructor 
#include<iostream>

using namespace std;
class student 
{
    int roll, age, marks;
    public :
            student()
            {
                roll = 101;
                age = 20;
                marks = 50;
            }
            void print()
            {
                cout<<"Roll no : "<<roll<<endl;
                cout<<"Age : "<<age<<endl;
                cout<<"Marks : "<<marks<<endl;
            }
};
int main()
{
   student s;
   s.print();  
    return 0;
}