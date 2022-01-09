// converting from Decimal to Binary 

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n ;
    cout<<"Enter the Decimal value : ";
    cin>>n;
    int ans = 0, i = 0;
    while(n!=0){
        int digit = n&1;
         ans = (digit * pow(10,i)) + ans;
        n = n>>1; // Right shift
        i++;
}
     cout<<"Decimal to Binary is : "<<ans<<endl;

    return 0;
}