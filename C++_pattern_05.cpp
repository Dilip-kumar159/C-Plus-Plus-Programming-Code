// Printing a pattern 
// 000000
//  11111
//   2222
//    333
//     44
//      5
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of lines to be printed : ";
    cin>>num;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j>=i)
            {
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
            cout<<endl;
        
    }
    
    return 0;
    
}