// Converting from Decimal to Binary

#include<iostream>
#include<algorithm>

using namespace std;

string convertDToB(int n){

    string res = "";

    while(n != 0){

        if(n % 2 == 1) res += "1";

        else res += "0";

        n = n / 2;
    }

    reverse(res.begin(), res.end());

    return res;
}
int main(){

    int n;
    cin>>n;

    string ans = convertDToB(n);

    cout<<"Binary Value of "<<n<<" is "<<ans<<endl;

    return 0;
}