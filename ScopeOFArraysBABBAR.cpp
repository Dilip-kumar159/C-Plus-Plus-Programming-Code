// Scope of Arrays in Functions.
#include<iostream>

using namespace std;
void update(int num[], int n){
    cout<<"Inside the Update Function() "<<endl;
    num[1] = 100; 
    num[0] = 500;  // Here the array num value is updatting so output is 1 100 3.
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<"Going back to Main Function() "<<endl;
}
int main()
{
    int num[3] = {1,2,3};

    update(num,3);
    cout<<"Inside the Main Function() "<<endl;
    for(int i=0; i<3; i++){ 
        cout<<num[i]<<" "; // Here the output also same as the update func(). 1 100 3.
        // because here in the function call update (num,3) num is a base adress so only the 
        // base address is passing in the function but not in the variable case where it 
        // is changing or copy was creating and the function and main function was returning
        // different value according to function.
    }
    return 0;
}