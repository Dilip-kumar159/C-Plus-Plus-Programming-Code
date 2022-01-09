// Power of (a,b) using functions
#include<iostream>

using namespace std;

int power(){
    int a, b;
    cout<<"Enter the power of number : ";
    cin>>a>>b;
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }
    return ans;
}
int main()
{
    // int n1 , n2;
    // cout<<"Enter the power of number : ";
    // cin>>n1>>n2;
    // int answer = power(n1,n2);
    int answer = power();
    cout<<"Power is "<<answer<<endl;

    answer = power();
    cout<<"Power is "<<answer<<endl;
    return 0;
}