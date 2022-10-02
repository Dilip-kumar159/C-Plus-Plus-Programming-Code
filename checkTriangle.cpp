// check whether the triangle is equivalent , isosceles or scalene triangle
#include<iostream>

using namespace std;

int main(){

    int a, b, c;
    cout<<"Enter the Three sides of the triangle : ";
    cin>>a>>b>>c;

    if(a==b && a==c){
        cout<<"The triangle is Equivalent Triangle "<<endl;
    }
    else if(a==c || b==c || a==b){
        cout<<"The triangle is Isosceles Triangle "<<endl;
    }
    else cout<<"The triangle is Scalene Triangle "<<endl;
    return 0;
}