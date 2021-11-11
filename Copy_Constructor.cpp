// Creating a Copy constructor.
#include<iostream>

using namespace std;
class student 
{
    int roll, age, marks;
    public : 
            student(int r, int a, int m)// parameterized constructor
            {
                roll = r;
                age = a;
                marks = m;
            }
            student(student &std)
            {
                roll = std.roll;
                age = std.age;
                marks = std.marks;
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
   student s(1101, 21, 90);
   cout<<"Parameterized Constructor called"<<endl;
   s.print();  
   student s1(s);
   cout<<"Copy Constructor called"<<endl;
   s1.print();
    return 0;
}