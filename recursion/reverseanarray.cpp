#include <bits/stdc++.h>
using namespace std;

void reversearr(int l, int n, int arr[])
{
    if (l >= n) return;
    swap(arr[l], arr[n - 1]);
    reversearr(l + 1, n - 1, arr);
}


int main()
{
    int arr[] = {1,2,1,1,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    reversearr(l, n, arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}




