// Maximum Occuring Character in a String
#include<iostream>

using namespace std;

    char getMaxOccCharacter(string s){

        int arr[26] = {0};
        for(int i=0; i<s.length(); i++){
            char ch = s[i];

            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }

        int maxi = -1, ans = 0;
        for(int i=0; i<26; i++){
            if(arr[i] > maxi){
                ans = i;
                maxi = arr[i];
            }
        }
        return 'a' + ans;
    }
int main()
{
    // char name[] = "Dili\0p";
    // cout<<name<<endl;

    // string n = "Dili\0p";
    // cout<<n<<endl;

    string name;
    cout<<"Enter a String : ";
    cin>>name;

    cout<<"Maximum Occurence of character is : "<<getMaxOccCharacter(name)<<endl;

    return 0;
}