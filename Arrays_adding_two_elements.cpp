// Adding two arrays.
#include<iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int array1[n];
    int array2[m];
    int result=0;
    // Inputing the first array element.
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    // Inputing the second array element.

    for (int i = 0; i < m; i++)
    {
        cin>>array2[i];
    }
    // Displaying the inputed elements of array1 and result also.
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<" "<<array1[i];
    // }
    for (int i = 0; i < n; i++)
    {
        result+=array1[i];
    }
    // cout<<endl;
    // Displaying the inputed elements of array2.
    for (int i = 0; i < m; i++)
    {
        result+=array2[i];
    }
    cout<<result;
    return 0;
}