#include <iostream>
using namespace std;

int reverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]); // swap shotcut for swapping 2 element
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {3, 6, 4,2,8, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
}


//method 2 for revrsing using indexing

#include <iostream>
using namespace std;

int reverse(int arr[], int size){

    for(int i=size-1;i>=0;i--){
            cout << arr[i] << " ";
        }
}

int main()
{
    int arr[] = {3, 6, 4,2,8, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, size);
    return 0;
}