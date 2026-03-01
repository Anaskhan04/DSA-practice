#include <bits/stdc++.h>
using namespace std; 

int movezero( vector < int> arr , int size ){
     int pointer= 0 ; 
     for (int i =0 ; i < size ;i++){
        if (arr[i] != 0){
            swap(arr[pointer] , arr[i]);
            pointer++;
        }
     }

}


int main (){
    vector < int> a1 = { 0, 1, 0, 3, 12};
    int size = a1.size();
    movezero(a1 , size);
   for ( int i =0 ; i < size ;i++){
    cout << a1[i] << " ";
   }
}