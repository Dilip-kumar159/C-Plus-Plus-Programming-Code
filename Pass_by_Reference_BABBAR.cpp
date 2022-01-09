#include<iostream>

using namespace std;

void passByRerference(int &a){
    a++;
}

void passByValue(int a){
    a++;
}

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;

}
int main()
{
    int a = 5;
    int b = a; // pass by value value will not 
    a++;

    cout<<"B : "<<b<<endl;

    int k = 5;
    int &t = k; // Pass by Reference value changes
    k++;

    cout<<"t : "<<t<<endl;

    int y = 10;
     passByRerference(y);
    cout<<"Y Pass by Reference : "<<y<<endl;

    int z = 10;
    passByValue(z);
    cout<<"Z Pass by Value : "<<z<<endl;

    // char ch = '1';
    // char *c = &ch;

    // cout<<sizeof(ch)<<endl;
    // cout<<sizeof(c)<<endl;

    int n;
    cout<<"Enter the numbers : ";
    cin>>n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr,n);

    cout<<"Answer : "<<ans<<endl;

    cout<<"Size of arr Pointer : "<<sizeof(arr)<<endl;
    cout<<"Size of array N elements : "<<sizeof(arr[n])<<endl;

    return 0;

}