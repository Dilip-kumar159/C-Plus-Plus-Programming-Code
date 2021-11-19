#include<iostream>

using namespace std;

int main()
{
    int a = 'a'; //   conversion from int data type to char
    cout << a << endl;

    char ch = 98;  // conversion from char data type to int
    cout << ch << endl;

    char c = 123456; // here the character data type as only 1 byte but the value exceeds,
    // more than that so the last part of the number it takes and gives warning in the , 
    // console and prints that value. here in this case it is printing @ symbol.
    cout << c << endl;

    return 0;
}   