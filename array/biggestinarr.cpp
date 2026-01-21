#include <iostream>
#include <climits>    // For INT_MIN
using namespace std;

int main()
{
    int arr[7] = {34, 544, 12, 3, 345, 45, 53};
    int big = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > big)
        {                 //
            big = arr[i]; // big=max[arr[i],big]
        }
    }
    cout << big;
    return 0;
}

// method 2
#include <iostream>
using namespace std;

void printn(int arr[])
{
    int largest = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}
int main()
{
    int arr[5] = {7, 6, 2, 8, 1};
    printn(arr);
}

// method 3  similar to method 2 but using a different insted of array it using vector<int> arr
#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {7, 6, 2, 8, 1};
    cout << largest(arr) << endl;
    return 0;
}