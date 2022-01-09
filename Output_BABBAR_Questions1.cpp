
#include<iostream>

using namespace std;

int main()
{
        // Output Question 1
        // int a, b = 1;
        // a = 10;
        // if(++a){
        //     cout<<b;
        // }
        // else{
        //     cout<<++b;
        // }

        // Output Question 2
        // int a = 1;
        // int b = 2;
        // if(a-- > 0 || ++b > 2){
        //     cout<<"Stage 1 - Inside if"<<endl;
        // }
        // else{
        //     cout<<"Stage 2 - Inside else"<<endl;
        // }
        // cout<<a<<" "<<b<<endl;

        // Output Question 3
        // int n = 3;
        // cout<<(25 * (++n));

        // Output Question 4
        // int a = 1;
        // int b = a++;
        // int c = ++a;
        // cout<<b<<endl;
        // cout<<c<<endl;

        // \Writing a for loop in a different way.
        int n = 5;
        int i = 1;
        for( ; ;){
            if(i<=n){
                cout<<i<<endl;
            }
            else{
                break;
            }
            i++;
        }

        // Writing a for loop in a different way.
        for (int a = 5, b = 3; a > 0 && b > 0 ; a--, b--)
        {
            cout<<a<<" "<<b<<endl;
        }
        
    return 0;
}