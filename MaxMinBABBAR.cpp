// printing the Maximum and minimum element in an array.
#include<iostream>

using namespace std;

int getMax(int num[], int n){
    int max = INT32_MIN;
    for(int i=0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n){
    int min = INT32_MAX;
    for(int i=0; i<n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cin>>size;

    int number[100];

    for (int i = 0; i < size; i++)
    {
        cin>>number[i];
    }

    cout<<"Maximum Value : "<<getMax(number,size)<<endl;
    cout<<"Minimum Value : "<<getMin(number,size)<<endl;
    


    return 0;
}