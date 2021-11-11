#include<iostream>

using namespace std;
struct Pair
{
    int max;
    int min;
};
 struct Pair MinMax(int arr[], int n)
 {
     struct Pair  minmax;
    //   for checking if there is only one element in an array.
     if (n==1)
     {
         minmax.max = arr[0];
         minmax.min = arr[0];
        return minmax;
     }
      // for checking first two element in an array
    if (arr[0] > arr[1])
    {
       minmax.max = arr[0];
       minmax.min = arr[1];
    }
    else
    {
      minmax.max = arr[1];
      minmax.min = arr[0];
    }

     // for checking rest of the element in an array that means after two elements.
    for (int i = 2; i < n; i++)
    {
       if (arr[i] > minmax.max)
           minmax.max = arr[i];

       else if (arr[i] < minmax.min)
           minmax.min = arr[i];
    }
           return minmax;
    
}
int main()
{
    int arr[] = {3000,11,445,1999,330,8000};
    int arr_size = 6;

    struct Pair minmax = MinMax(arr, arr_size);

    cout<<"Minimum element is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max<<endl;

    return 0;
}