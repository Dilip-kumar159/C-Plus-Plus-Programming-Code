// Creation of iterators using vectors and unorder maps.
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

int main()
{
    unordered_map<string , int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;
    mymap["abc5"] = 6 ;

    unordered_map<string , int> :: iterator it = mymap.begin();
    while (it != mymap.end())
    {
        cout<<"Key : "<<it->first<<" values : "<<it->second<<endl;
        it++;
    }

    //find function to find the key
    unordered_map<string , int> :: iterator it2 = mymap.find("abc");
    

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    vector<int> :: iterator it1 = v.begin();
    while (it1 != v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
    
    return 0;
}
