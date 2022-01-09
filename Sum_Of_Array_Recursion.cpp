#include<iostream>

using namespace std;

int sumArray(int *arr, int size){

    // Base Condition
    if(size == 0)
    return 0;

    if(size == 1)
    return arr[0];

    // Recursive call
    int remPart = sumArray(arr+1, size-1);
    int sum = arr[0] + remPart;
    return sum;

}
int main()
{
    int arr[5] = {5,5,5,5,5};
    int size = 5;

    int sum = sumArray(arr, size);
    cout<<"Sum is : "<<sum<<endl;

    return 0;
}