#include<iostream>

using namespace std;

void sayDigits(int n, string *arr){

    // Base Condition
    if(n == 0)
    return;

    // Processing
    int digit = n % 10;
    n = n/10;

    // Recursive call
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";

}
int main()
{
    int n;
    cin>>n;

    string arr[10] = {"Zero","One","Two","Three","Four",
                     "Five","Six","Seven","Eight","Nine"};

    cout<<endl;
    sayDigits(n,arr);
    cout<<endl;
    return 0;
}