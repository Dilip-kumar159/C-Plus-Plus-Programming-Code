// Square root using binary search with precission 
#include<iostream>

using namespace std;

long long int squareRoot(int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    long long int ans = -1;
    while(start <= end){
        
        long long int square = mid*mid;

        if(square == n){
            return mid;
        }

        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecission(int n, int precission, int integerSquare){

    double factor = 1;
    double answer = integerSquare;

    for(int i = 0; i<precission; i++){
        factor = factor/10;

        for(double j = answer; j*j < n; j = j+factor){
            answer =  j;
        }
    }

    return answer;
}
int main()
{
    int n;
    cout<<"Enter the number for square root : ";
    cin>>n;

    long long int integerSquare = squareRoot(n);

    cout<<"Square Root of Integer is : "<<integerSquare<<endl;
    cout<<endl;

    double precission = morePrecission(n,5,integerSquare);

    cout<<"Square Root with Precission is : "<<precission<<endl;
    return 0;
}