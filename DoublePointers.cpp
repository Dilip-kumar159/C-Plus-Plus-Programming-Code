#include<iostream>

using namespace std;
void update(int **ptr){
    
    //  ptr = ptr+1;   --> No changes

    //  *ptr = *ptr + 1; --> yes Changes

    // **ptr = **ptr + 1; --> yes Changes

}

void increement(int **p){
    (**p)++;

}
int main()
{
    // int a = 5;
    // int *p = &a;
    // int **ptr = &p;

    // cout<<"Before : "<<a<<endl;
    // cout<<p<<endl;
    // cout<<ptr<<endl;
    // update(&p);

    // cout<<"After : "<<a<<endl;
    // cout<<p<<endl;
    // cout<<ptr<<endl;

    int num = 10;
    int *ptr = &num;
    increement(&ptr);
    cout<<num<<endl;

    return 0;
}