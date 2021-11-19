#include<iostream>

using namespace std;

int main()
{
    int a = 24;

    if(a > 20){
        cout << "A is greater than 20" << endl;
    }

    else if(a == 24){
        cout << "A is equal to 24" << endl;
    }

    else{
        cout << "A is not greater and not equal to 20 and 24 respectively";
    }

    cout << a;
    return 0;
}