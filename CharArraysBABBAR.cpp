// Printing Character Arrays.
#include<iostream>

using namespace std;
    int getLength(char name[]){

        // using for loop
        // int count = 0;
        // for(int i=0; name[i] != '\0'; i++){
        //     count++;
        // }
        // return count;

        // using While Loop
        int count = 0; 
        int i = 0;
        while(name[i] != '\0'){
            count++;
            i++;
        }
        return count;
    }

    // Reverse a string

    void reverse(char name[], int n){
        int start = 0;
        int end = n - 1;

        while(start <= end){
            swap(name[start++], name[end--]);
        }   
    }


    char lowercase(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return ch;
        }
        else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome(char name[], int n){
        int start = 0;
        int end = n - 1;

        while(start <= end){
            if(lowercase(name[start]) != lowercase(name[end])){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        return 1;
        
    }
int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
   // name[3] = '\0'; // eg: Dilip --> it prints till Dil. Because index starts from 0 and,
    // whenever a null character occurs then exection is stoped.

    cout<<"Your name is : "<<name<<endl;

    int length = getLength(name);
    cout<<"The length of the String is : "<<length<<endl;

    reverse(name,length);
     cout<<"Your name is : "<<name<<endl;

    cout<<"Palindrome or Not "<<checkPalindrome(name,length)<<endl;
    return 0;
}