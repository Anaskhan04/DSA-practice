#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {43, 22, 44, 11, 45, 78, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }


    for( int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    
    }
}