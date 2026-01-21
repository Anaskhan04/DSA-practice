#include <bits/stdc++.h>
using namespace std;



//method 1 
bool isSorted( int arr[] , int n ){
if ( n==0 || n==1) return true;

    return  (arr[n-1]>= arr[n-2]) && isSorted(arr , n-1);

}

//method 2 
bool isSorted(int arr[], int n) {
    if (n == 0 || n == 1)
        return true;

    if (arr[n - 1] < arr[n - 2])                        // if make the condition for false check earlier it will return false and stop      the conddition if coccur
        return false;

    return isSorted(arr, n - 1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << isSorted( arr,n);
}