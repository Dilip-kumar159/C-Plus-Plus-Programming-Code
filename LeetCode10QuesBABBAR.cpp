// Merge two sorted arrays and store in the first array.
#include<iostream>
#include<vector>

using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2, int m, int n) {
	
    int i = m - 1;
    int j = n - 1;
    int lastIndex = m + n - 1;
    while( j>=0){
        if(i>=0 && arr1[i] > arr2[j]){
          arr1[lastIndex] = arr1[i];
            i--;
        }
        else{
            arr1[lastIndex] = arr2[j];
            j--;
        }
       lastIndex--;
    }
    
    return arr1;
}

void print(vector<int> arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
     vector<int> arr1;
     arr1.push_back(1);
     arr1.push_back(3);
     arr1.push_back(5);
     arr1.push_back(7);
     arr1.push_back(0);
     arr1.push_back(0);
     arr1.push_back(0);
     arr1.push_back(0);



     vector<int> arr2;
     arr2.push_back(0);
     arr2.push_back(1);
     arr2.push_back(2);
     arr2.push_back(3);

    

    int n = 4;
    int m = 4;

    cout<<"First Array : ";
    print(arr1);

    cout<<"Second Array : ";
    print(arr2);

    cout<<"AFter merging the array and stores in first array"<<endl;

    vector <int> result =  merge(arr1,arr2,m,n);
    print(result);
    

    return 0;
}