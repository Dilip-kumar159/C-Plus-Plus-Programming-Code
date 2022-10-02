#include<iostream>

using namespace std;

// Trust the recursive call
void patternPrint(int n){

    if(n == 0){
        return;
    }
    patternPrint(n-1);
    char c = 'A';
    for(int i=1; i<=n; i++){
        cout<<c<<" ";
        c++;
    }
    cout<<endl;
}

void pattern1Print(int n){

    if(n==0){
        return;
    }

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    pattern1Print(n-1);
    
}
void pattern2Print(int n){

    if(n == 1){
        return;
    }
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    pattern2Print(n-1);

    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    // pattern2Print(n-1);
}
int main(){

    int n;
    cin>>n;

   cout<<"First Pattern "<<endl<<endl;
   patternPrint(n);
   cout<<endl;
   cout<<"Second Pattern "<<endl<<endl;
   pattern1Print(n);
   cout<<endl;
   cout<<"Third Pattern "<<endl<<endl;
   pattern2Print(n);

    return 0;
}