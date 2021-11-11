// Creating a Vector 
#include<iostream>
#include<vector> // Important to include a header file called vector.
using namespace std;

int main()
{
    // vector<int> *vp = new vector<int>(); other way to create a vector.
    vector<int> v;
    // For inserting we need to use push_back function.
    for (int i = 0; i < 20; i++)
    {
    // capacity function shows how the vector doubles memory when it requires.
        cout<<"Capacity : "<<v.capacity()<<endl;
        cout<<"size : "<<v.size()<<endl;
        v.push_back(i + 1);
    }
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 200; // For updating any number in vector.

    v.push_back(23);
    v.push_back(234);
    
    // For deleting we need to use pop_back function.
      v.pop_back();
      v.pop_back();

    // Displaying through for loop
    // for (int i = 0; i < v.size(); i++)
    // {
        // cout<<v[i]<<endl;
    // }
    
    /* displaying normally
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;  */
    cout<<"Size : "<<v.size()<<endl;
    // cout<<v.at(2)<<endl;
    // cout<<v.at(4)<<endl; 
    return 0;
}