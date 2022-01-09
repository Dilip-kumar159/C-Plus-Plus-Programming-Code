// Creating a calculator using switch-case

#include<iostream>

using namespace std;

int main()
{
    int a , b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;

    char op;
    cout<<"Enter the Operation which you want to perform : ";
    cin>>op;

    switch (op){
        case '+' : cout<<"Add : "<<(a+b)<<endl;
                   break;
        case '-' : cout<<"Minus : "<<(a-b)<<endl;
                    break;
        case '*' : cout<<"Multiply : "<<(a*b)<<endl;
                    break;
        case '/' : cout<<"Divide : "<<(a/b)<<endl;
                    break;
        case '%' : cout<<"Modulus : "<<(a%b)<<endl;
                    break;
        default : cout<<"Enter the valid operations "<<endl;
                    break;
            
    }
    return 0;
}   