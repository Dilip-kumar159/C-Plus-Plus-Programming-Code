// Constructor overloading 
#include<iostream>

using namespace std;
class student
{
    int roll;
    string name;
    public : 
            student(int x)
            {
                roll = x;
                name = "No Name";
            }
            student (int x, string str)
            {
                roll = x;
                name = str;
            }
            void print()
            {
                cout<<"Roll no : "<<roll<<endl;
                cout<<"Name : "<<name<<endl;
            }
};
int main()
{
  student a(10);
  a.print();
  student b(12, "Dilip");
  b.print();
    return 0;
}