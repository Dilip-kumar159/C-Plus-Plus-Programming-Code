// Showing how many notes required to get the actual amount.

#include<iostream>

using namespace std;

int main()
{
    int n, hundread=0, fifty=0, twenty=0, one=0;
    cout<<"Enter the amount : ";
    cin>>n;
    
    switch(1){
        case 1 : hundread += n / 100;
                 n = n % 100;
                 cout<<"Hundread notes : "<<hundread<<endl;

        case 2 : fifty += n / 50;
                 n %= 50;
                 cout<<"Fifty notes : "<<fifty<<endl;

        case 3 : twenty += n / 20;
                 n %= 20;
                 cout<<"twenty notes : "<<twenty<<endl;

        case 4 : one += n / 1;
                 n %= 1;
                 cout<<"one notes : "<<one<<endl;

        default : cout<<"Invalid amount";
    }
    return 0;
}