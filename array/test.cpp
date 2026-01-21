
// if neededd to get {5,2,3,4,6,7,1} after rotation , shifting elemnt in backward direction
#include <iostream>
using namespace std;

int rotate(int arr[], int size , int k)
{
    // k = k % size;
    int temp[k];
   for( int i=0;i<k;i++){
        temp[i] = arr[i];         // or u can use temp.push_back(arr[i]); to use vector if using vector 
   }
   for( int i=0;i<size-k; i++){
        arr[i] = arr[i+k];
   }
   int j=0;
   for( int i=size-k; i<size; i++){
        arr[i] = temp[j];                    //instead of using a J variable, we can use j directly as i-(size-k) will give the correct index
        j++;
  }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 5; 
    rotate(arr, size , k);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}