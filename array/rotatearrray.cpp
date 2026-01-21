// #include <iostream>
// using namespace std;

// int rotate(int arr[], int size)
// {
//     int temp=arr[0];
//     for( int i=0;i<size-2;i++){
//         arr[i] = arr[i+1];
//     }
//     arr[size-1] = temp; // Place the first element at the end     //{2,3,4,5,6,7,1} after rotation

// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     rotate(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << ' ';
//     }
// }


// if neededd to get {7 1 2 3 4 5 6 } after rotation , shifting elemnt in backward direction
#include <iostream>
using namespace std;

int rotate(int arr[], int size)
{
    int temp=arr[size-1]; // Store the last element
    for( int i=size-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp; // Place the first element at the end     //{2,3,4,5,6,7,1} after rotation

}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    rotate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}