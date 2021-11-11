// Create a calculator using switch case statements.
#include<iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    char oper; // Operations 
    cout<<"Enter the number 1 value "<<endl;
    cin>>num1;
    cout<<"Enter the number 2 value "<<endl;
    cin>>num2;

    cout<<"Enter the operator to perform(+,-,*,/)"<<endl;
    cin>>oper;

    switch (oper)
    {
    case '+': 
            result = num1 + num2;
    cout<<"The sum of "<<num1<<"  "<<oper<<" "<<num2<<" = "<<result;
        break;

    case '-': 
            result = num1 - num2;
    cout<<"The subtraction of "<<num1<<"  "<<oper<<" "<<num2<<" = "<<result;
        break;

    case '*': 
            result = num1 * num2;
    cout<<"The multiplication of "<<num1<<"  "<<oper<<" "<<num2<<" = "<<result;
        break;

    case '/': 
            result = num1 / num2;
        cout<<"The division of "<<num1<<"  "<<oper<<" "<<num2<<" = "<<result;
        break;
    
    default:
            cout<<"Invalid input no operations will be performed !";
        break;
    }

    return 0;
}