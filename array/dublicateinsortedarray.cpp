#include <iostream>
using namespace std;

int Dublicateinarray(int arr[], int size)
{
    int i = 0;
    for (int j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
        }
    }       cout <<  i + 1;     // Print the number of unique elements

}
int main()
{
    int arr[] = {1, 1, 3, 3, 4, 4, 9, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    Dublicateinarray(arr, size);
    return 0;
}