//  Couting the words in the given string.
#include<iostream>

using namespace std;
   int  countWords(string s)
    {
        if (s.size()==0)
        {
            return 0;
        }
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]==' ')
            {
                count++;
            }
            
        }
        return count + 1;
        
    }
int main()
{
    string s;
    cout<<"Enter a string : ";
    getline(cin, s);
    cout<<endl;
   int z = countWords(s);
   cout<<"The number of  words in the given string is : "<<z<<endl;


    return 0;
}