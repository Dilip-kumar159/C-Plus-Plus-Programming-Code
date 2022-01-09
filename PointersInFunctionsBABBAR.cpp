
#include<iostream>

using namespace std;

int print(int *arr, int n){

    cout<<"Size of Array : "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[5] = {1,2,3,4,5};

    int ans = print(arr,5);
    cout<<"Sum is : "<<ans<<endl;


    int a[5];
    int *c;
    cout << sizeof(a) << " " << sizeof(c);


     char arr1[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr1 + i) = 65 + i;
  }
  *(arr1 + i) = '\0';
  cout << arr1;
    return 0;
}