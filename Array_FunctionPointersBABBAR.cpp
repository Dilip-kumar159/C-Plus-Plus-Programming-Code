// Arrays and Function Pointers
#include<iostream>

using namespace std;

void print(int *p){

    cout<<p<<endl;
    cout<<*p<<endl;

}

void update(int *p){

    p = p + 1;

}
void increement(int *ptr){

    (*ptr)++;
}
int main()
{
    /* 

    int arr[3] = {8,3,2};

    // cout<<arr<<endl;

    // cout<<&arr[0]<<endl;

    int *p = arr;

    cout<<"Address of Pointer p : "<<sizeof(p)<<endl;

    cout<<p<<endl;

    cout<<*p<<endl;
    
    p++;
    cout<<"After "<<p<<endl;

    cout<<"After "<<*p<<endl;

   char arr[6] = "Dilip";

   cout<<arr<<endl;
   
   cout<<arr[0]<<endl;
   
   cout<<&arr<<endl;

    char *c = &arr[0];

    cout<<"Pointer value : "<<c<<endl;
    cout<<"Pointer Address : "<<&c<<endl;
    cout<<"Pointer Size : "<<sizeof(c)<<endl;
    */

   int a = 5;
   int *ptr = &a;

   print(ptr); 
   cout<<"Printing Addresses"<<endl;
    cout<<"Before "<<ptr<<endl;
    update(ptr);
    cout<<"After "<<ptr<<endl;
    cout<<endl;

    cout<<"Printing values "<<endl;
    cout<<"After "<<*ptr<<endl;
    increement(ptr);
    cout<<"Before "<<*ptr<<endl;

    return 0;
}