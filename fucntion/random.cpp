#include <iostream>
using namespace std;

void Arre(int arr[]){
   arr[0]+=100;
   cout << arr[0] << endl;
}

int main(){
    int n=5;
    int arr[n];
for( int i=0 ; i<n ; i++){
    cin >> arr[i];

    Arre(arr);
} 
    return 0;
}