
#include <iostream>
using namespace std;
#include <limits.h>
void sl(int arr[], int size)
{
    int secondsmallest = INT_MAX;
    int smallest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondsmallest = smallest;

            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondsmallest)
        {
            secondsmallest = arr[i];
        }
    }
    cout << "The secondsmallest element is: " << secondsmallest << endl;
   cout << "The smallest element is: " << smallest << endl;
    }

int main()
{
    int arr[7] = {2, 1, 1, 1, 1, 1, 1};
    int size = 7;
    sl(arr, size);
}