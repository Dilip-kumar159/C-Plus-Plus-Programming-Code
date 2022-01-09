#include<iostream>

using namespace std;

int main()
{
    /* 
    int num = 5;
    cout<<"Num value Before : "<<num<<endl;

    cout<<"Num Address : "<<&num<<endl;

    // Pointer Creation
    int *p = &num;
    cout<<"Pointer derefernce : "<<*p<<endl;
    (*p)++;
    cout<<"Pointer Incremented : "<<*p<<endl;

     cout<<"Num value after : "<<num<<endl;

    cout<<"Pointer value : "<<p<<endl;

    */
   int i = 10;
    int a = i;
    a++;

    cout<<"I value : "<<i<<endl;

    cout<<"A value : "<<a<<endl;

    int j = 2;
    int *p = &j;
    (*p)++;

    cout<<"J value : "<<j<<endl;
    cout<<"Address of the j : "<<&j<<endl;

    *p = *p + 2;
    cout<<"Pointer Value : "<<*p<<endl;
    cout<<"Address of the p : "<<p<<endl;
    cout<<"j value after incremented : "<<j<<endl;
    

    cout<<"Size of the J : "<<sizeof(j)<<endl;

    cout<<"Size of the Pointer : "<<sizeof(p)<<endl;

    char ch = 'a';

    char *c = &ch; 

    cout<<"Size of the ch : "<<sizeof(ch)<<endl;

    cout<<"Size of the Pointer : "<<sizeof(c)<<endl;






    return 0;
}
