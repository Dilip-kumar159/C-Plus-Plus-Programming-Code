// Create a shopping list using the class.
#include<iostream>
#include<string> // this header file for char.
#include<iomanip> // Header file is for setw().

using namespace std;
class shoppinglist
{
    private : 
        float rate;
        int quantity;
        char itemname[10];
    public :
        void readitems()
        {
            cout<<"Enter the item name : ";
            cin>>itemname;
            cout<<"Enter the rate : ";
            cin>>rate;
            cout<<"Enter the quantity : ";
            cin>>quantity;
        }
        void printitems()
        {
            cout<<setw(15)<<itemname;
            cout<<setw(10)<<rate;
            cout<<setw(15)<<quantity;
            cout<<setw(10)<<rate * quantity<<endl;
        }
};
int main()
{
    int i, n;
    cout<<"Enter the number of items : ";
    cin>>n;
    shoppinglist s[10];
    for (int i = 0; i < n; i++)
    {
        s[i].readitems();
    }
    cout<<setw(30)<<"SHOPPING LIST"<<endl;
    cout<<setw(15)<<"Itemname"<<setw(10)<<"Rate"<<setw(15)<<"Quantity"<<setw(10)<<
    "Amount"<<endl;
        for (int i = 0; i < n; i++)
        {
            s[i].printitems();
        }
    return 0;
}