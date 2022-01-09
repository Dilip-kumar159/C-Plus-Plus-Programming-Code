// checking the given number is prime or not.
#include<iostream>

using namespace std;
bool isPrime(int n){
   
    for(int i=2; i<n; i++){
         // the number is divided
        if(n%i == 0){
        return 0;
       }
   }
   return 1;
}
int main()
{
    int num; 
    cin>>num;
    if(isPrime(num)){
        cout<<"Number is Prime "<<endl;
    }
    else{
        cout<<"Number is not Prime"<<endl;
    }
    return 0;
}