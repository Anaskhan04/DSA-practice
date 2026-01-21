#include <iostream>
using namespace std;

int sumoandproduct(int arr[], int size)
{
    int sum = 0;
    // for sum of all element
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "final sum of all element in array : " << sum;
    cout << endl;

    // for product of all element
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }

    cout << "product of all element : " << product;
}
int main()
{
    int arr[] = {2, 5, 4, 6, 9, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);              // this is not a good practice bcz it will not work if we      intitilisze array with more size but value in them is only few     ex Arr[5]={3,6};   here size should be 2 not 5
    sumoandproduct(arr, size);
}