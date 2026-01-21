#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    int sawp1 = 0;
    for (int j = 1; j < size; j++)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                sawp1 = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = sawp1;
            }
        }
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int arr[5] = {5, 3, 8, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
}