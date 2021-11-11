// Sorting only 0,1,2's elements in array.

#include<iostream>

using namespace std;

    void sort(int arr[], int n)
    {
        int countzero=0;
        int countone=0;
        int counttwo=0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i]==0)
            {
                countzero++;
            }

           else if (arr[i]==1)
            {
                countone++;
            }

           else if (arr[i]==2)
            {
                counttwo++;
            }
         }
         int index=0;
         for (int i = 0; i < countzero; i++)
         {
            arr[index]=0;
            index++;
         }
         
         for (int i = 0; i < countone; i++)
         {
            arr[index]=1;
            index++;
         }
         
         for (int i = 0; i < counttwo; i++)
         {
            arr[index]=2;
            index++;
         }
         
        
    }
int main()
{
    int t; // t refers to number of test cases
    cout<<"Enter the test case : "<<endl;
    cin>>t;
    while (t>0)
    {
        int n; 
        cout<<"Enter the number of elements in an array "<<endl;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
        cout<<"After sorting "<<endl;
        sort(arr,n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        t--;
        
    }

    
    return 0;
 }

// #include <iostream>
// using namespace std;

// void sort012(int arr[], int n) {

//     int countZero = 0;
//     int countOne = 0;
//     int countTwo = 0;

//     for (int i = 0; i < n; i++) {

//         if (arr[i] == 0)
//             countZero++;

//         else if (arr[i] == 1)
//             countOne++;

//         else if (arr[i] == 2)
//             countTwo++;
//     }

//     int index = 0;

//     for (int i = 0; i < countZero; i++) {

//         arr[index] = 0;
//         index++;
//     }

//     for (int i = 0; i < countOne; i++) {

//         arr[index] = 1;
//         index++;
//     }

//     for (int i = 0; i < countTwo; i++) {

//         arr[index] = 2;
//         index++;
//     }

// }

// int main() {
//     int t;
//     cin >> t;

//     while (t > 0) {
//         int n;
//         cin >> n;
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         sort012(arr, n);
//         for (int i = 0; i < n; i++) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//         t--;
//     }
//     return 0;
// }