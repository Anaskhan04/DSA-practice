#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[7] = {23, 45, 112, 1, 3, 55, 67};
    int small = INT_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i]; // small=max[arr[i],small]
        }
    }
    cout << small;
    return 0;
}

// method 2
#include <iostream>
using namespace std;

void printSmallest(int arr[])
{
    int smallest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << smallest << endl;
}

int main()
{
    int arr[5] = {7, 6, 2, 8, 1};
    printSmallest(arr);
}


// method 3 similar to method 2 but using a different instead of array it using vector<int> arr
#include <iostream>
#include <vector>
using namespace std;
int smallest(vector<int> &arr)
{
    int smallest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    vector<int> arr = {7, 6, 2, 8, 1};
    cout << smallest(arr) << endl;
    return 0;
}

//smalllerst array index
