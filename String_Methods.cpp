// Methods of strings 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
 
        // i) Using inbuilt size method: 
        // The method size returns the length of the string.
        string str1 = "Dilip Kumar";
        cout<<"The string size is "<<str1.size()<<endl;
        

        // ii) Using inbuilt reverse function:
        // The method reverses the string. 
        // It is present in the algorithm.h header file.

        string str = "Dilip Kumar";
        cout<<"Before reversing the string : "<<str<<endl; 
        reverse(str.begin(), str.end());
        cout<<"After reversing the string : "<<str<<endl; 
                
        // iii) Using inbuilt sort function:
        // The method sorts the string.
        // It is present in the algorithm.h header file.
        string str2 = "Dilip Kumar";
        cout<<"Before sorting the string : "<<str2<<endl;
        sort(str2.begin(),str2.end());
        cout<<"After sorting the string : "<<str2<<endl;



    return 0;
}