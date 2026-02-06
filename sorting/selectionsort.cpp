#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {43,22,44,11,45,78,12,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int min=i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";

}}

