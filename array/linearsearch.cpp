#include <iostream>
using namespace std;

int linersearch(int arr[], int target, int size)
{
     for (int i = 0; i < size; i++)
     {
          if (arr[i] == target)
          {
               return i;
          }
     }

     return -1;
}

int main()
{
     int arr[] = {1, 2, 9, 3, 8, 5, 4};
     int size = sizeof(arr) / sizeof(arr[0]); // to calculate the size of an array
     int target = 9;

     cout << linersearch(arr, target, size);
}








