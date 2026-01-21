#include <iostream>
using namespace std;

int BS(int array[], int target, int low, int high)
{
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);

        if (array[mid] > target)
        {
            high = mid - 1;
        }
        else if (array[mid] < target)
            {
                low = mid + 1;
            }
        else
        {
            return mid; // the index at which there target is available
        }
    }
    return -1;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int target = 15;
    int size = sizeof(array) / sizeof(array[0]);
    int low = 0;
    int high = size - 1;

    int result = BS(array, target, low, high);
     if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
