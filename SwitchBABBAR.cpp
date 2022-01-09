// Switch-case

#include<iostream>

using namespace std;

int main()
{
    int num = 2;
    char ch = '1';
    char cha = 'b';

    while(1){
    switch(ch){
        case '1' : cout<<" First Number"<<endl;
                    break;
                //  continue; It is not valid in switch case.
        case 2 : cout<<" Second Number"<<endl;
                 break;
        case 3 : switch (cha){
                    case 'b': cout<<"Character printed in nested switch case"<<endl;
                            break;
        
                    default: cout<<"Invalid in nested switch case"<<endl;
                            break;
        }
        break;
        default : cout<<"Invalid Number"<<endl;
    }
        exit(0);
  }
    return 0;
}