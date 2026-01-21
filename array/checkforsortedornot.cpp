#include <iostream>
using namespace std;

bool arraySortedOrNot(int arr[], int n) {
        for(int i=1;i<n;i++){
            if(arr[i]>=arr[i-1]){
                
            }else{
                return false;
            }
        } return true;
    }


int main() {
    int arr[7] = {2, 1, 1, 4, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    arraySortedOrNot(arr, size);
    
    return 0;
}