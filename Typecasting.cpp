#include<iostream>

using namespace std;

int main()
{
    // // TYPE CASTING IMPLICITLY
    int number = 200;
    char letter = 'c';
    float dec = 0.7;
    int res1 = number + letter;
    // Here letter is implicitly converted into int data type ,
    // and the value of c in ASCII code is 99.
    float res2 = res1 + dec;
    // Here res1 is implicitly converted into float data type.
    cout<< res1 <<endl;
    cout<< res2 <<endl;


    // TYPE CASTING EXPLICITLY  syntax is (type) expression.

        char better = 'A';
        int res = (int)better + 1;
        cout<< res <<endl;    
    

    return 0;
}