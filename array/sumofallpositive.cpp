#include <iostream>
using namespace std;


int posAverage(int arr[], int size) {

   
    int sum=0;
    int positive=0;
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            positive +=1;
            sum+=arr[i];
        }
    }
    return sum/positive;

}
int main() {
    int arr[7] = {2, 1, 1, 4, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
     posAverage(arr, size);
    
    return 0;
}