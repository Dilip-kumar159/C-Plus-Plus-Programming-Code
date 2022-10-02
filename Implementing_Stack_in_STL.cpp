// Stack Implementation using STL
#include<iostream>
#include<stack>

using namespace std;

int main(){

    // stack creation
    stack<int> s;

    // push operation in stack
    s.push(10);
    s.push(3);
    s.push(5);
    s.push(32);

    // pop operation in stack
    s.pop();
    s.pop();
    
    cout<<"Top Element is : "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is Not empty"<<endl;
    }

    cout<<"Size of the stack is : "<<s.size()<<endl;

    return 0;
}