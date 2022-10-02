// Solving Tower Of Hanoi using Recursion.
#include<iostream>

using namespace std;

void towerOfHanoi(int noDisk, char src, char dest ,char helper){

    // Base case
    if(noDisk == 1){
        cout<<"Move 1st Disk from "<<src<<" to "<<dest<<endl;
        return;
    }

    // Recursive Call
    towerOfHanoi(noDisk - 1, src, helper, dest);
    cout<<"Move "<<noDisk<<"th Disk from "<<src<< " to "<<dest<<endl;
    towerOfHanoi(noDisk - 1, helper, dest, src);
}
int main()
{
    int noOfDisk;
    cout<<"Enter the Number Of Disk : ";
    cin>>noOfDisk;

    char src = 'a';
    char helper = 'b';
    char dest = 'c';

    towerOfHanoi(noOfDisk, src, dest, helper);
    return 0;
}