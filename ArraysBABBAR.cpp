// Arrays implementation , accessing and declaring 
#include<iostream>

using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void printArray1(char xh[], int size){
    for(int i = 0; i<size; i++){
        cout<<xh[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int length = 15;
    int arr[15] = {10,20,30,40,50,60,70,80,90,100,200,300,400,500};
    // cout<<"value of index : "<<arr[0]<<endl;

    char ch[5] = {'a','e','i','o','u'};
    printArray1(ch,5);
    printArray(arr,length);
    return 0;
}