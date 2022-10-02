// Custom implementation of Stack using Arrays
#include<iostream>

using namespace std;

class stack{
    // properties
    public : 
            int *arr;
            int top;
            int size;

    // behaviour or functions
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    
    // Push Operation
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is OverFlow"<<endl;
        }
    }

    // Pop Operations
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack is Underflow"<<endl;
        }
    }

    // Peek Opeartions
    int peek(){
        if(top >= 0)
        return arr[top];

        else return -1;
    }

    // Empty Opeartions
    bool empty(){
        if(top < 0){
            cout<<"Stack is Empty"<<endl;
            return true;
        }
        else{
            cout<<"Stack is not Empty"<<endl;
            return false;
        }
    }
};
int main(){

    // creating a object for stack class
    stack st(5);

    st.push(20);
    st.push(4);
    st.push(8);
    st.push(15);
    

    // st.pop();
    // cout<<"Peek Element is : "<<st.peek()<<endl;

    // st.pop();
    // cout<<"Peek Element is : "<<st.peek()<<endl;

    // st.pop();
    // cout<<"Peek Element is : "<<st.peek()<<endl;

    // st.empty();

    // st.push(100);
    cout<<"Peek Element is : "<<st.peek()<<endl;

    st.empty();

    return 0;
}