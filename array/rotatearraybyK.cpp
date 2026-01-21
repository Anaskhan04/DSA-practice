#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArrayleft(vector<int>arr, int k) {
    int temp[k];
    int n=arr.size();
    k=k%n;
   for( int i=0;i<k;i++){
        temp[i] = arr[i]; 
   }
   for( int i=0;i<n-k; i++){
        arr[i] = arr[i+k];
   }
   int j=0;
   for( int i=n-k; i<n; i++){
        arr[i] = temp[j];
        j++;
  }
  return arr;
    };


    int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    vector<int> rotatedArray = rotateArrayleft(arr, k);
    cout << "Rotated array: ";
    for (int i = 0; i < rotatedArray.size(); i++) {
        cout << rotatedArray[i] << " ";
    }
    cout << endl;
    return 0;

}



//if want to rotate right  using the same logic above used done by anas . but this is the worst way . doing for right is separte but i try to implemnt in thsi only 

void rotate(vector<int>& nums, int k) {
    int n=nums.size();
        k=k%n;

        vector <int> temp(n-k);

   for( int i=0;i<n-k;i++){   
        temp[i] = nums[i]; 
   }
   for( int i=0;i<k; i++){
        nums[i] = nums[n-k+i];
   }
   int j=0;
   for( int i=k; i<n; i++){
        nums[i] = temp[j];
        j++;
  }
    }


    int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);
    cout << "Rotated array: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    }





    // real approch for good solution for rotating array by k