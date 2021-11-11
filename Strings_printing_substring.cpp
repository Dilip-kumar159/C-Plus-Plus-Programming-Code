// Printing all substring in a given array,
// abc
// a
// ab
// abc
// b
// bc
// c
#include<iostream>

using namespace std;
    void print_substring(string s)
    {
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k < j+1; k++)
                {
                    cout<<s[k];
                }
                cout<<endl;
            }
            
        }
        
    }
int main()
{
    string s;
    cout<<"Enter the string : "<<endl;
    getline(cin, s);
    print_substring(s);
    return 0;
}