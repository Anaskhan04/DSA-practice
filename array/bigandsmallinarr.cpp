#include <iostream>
#include <utility>  // for std::pair
using namespace std;

// Function to find the minimum and maximum elements in an array
pair<int, int> getMinMax(int arr[], int size) {
    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    return {minimum, maximum}; // returning as a pair
}

int main() {
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr) / sizeof(arr[0]);

    pair<int, int> result = getMinMax(arr, size);

    cout << "Minimum: " << result.first << endl;
    cout << "Maximum: " << result.second << endl;

    return 0;
}
