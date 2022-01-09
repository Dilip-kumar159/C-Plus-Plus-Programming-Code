// Airthmetic Progression program
#include<iostream>

using namespace std;
int AP(int n){
    int ans = (3*n+7);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int answer = AP(n);
    cout<<"Airthmetic Progression is : "<<answer<<endl;
    return 0;
}