// Recursion for printing the count numbers

#include<iostream>

using namespace std;
void tailRecursive(int n){
    // Base condition
    if(n == 0)
    return;
    cout<<n<<" ";

    // Recursive Condition
    tailRecursive(n-1);  // --> Tail Recursive
}

void headRecursive(int n){
    // Base Condition
    if(n == 0)
    return;
    // Recursive Condition
    headRecursive(n-1); //--> Head Recursive

    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;

    cout<<"Printing Tail Recursive "<<endl;
    tailRecursive(n);

    cout<<endl;
    
    cout<<"Printing Head Recursive "<<endl;
    headRecursive(n);
    return 0;
}