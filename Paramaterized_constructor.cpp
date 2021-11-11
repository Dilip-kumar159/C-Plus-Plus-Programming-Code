// Parameterized constructor creation.
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
   s.print();  
    return 0;
}