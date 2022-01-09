#include<iostream>

using namespace std;

void reachHome(int src, int dest){

    cout<<"Src : "<<src<<" Dest : "<<dest<<endl;
    // Base case 
    if(src == dest){
        cout<<"Reached Source to Destination"<<endl;
        return;
    }
    // Processing 
    src++;
    // Recursive Relation
    reachHome(src, dest);
}
int main()
{
    int destination = 9;
    int source = 1;

    reachHome(source, destination);
    return 0;
}