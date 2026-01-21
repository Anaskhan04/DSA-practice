#include <bits/stdc++.h>
using namespace std;

int seq(int num){
    if(num==0) return 0;    // Base case to stop recursion
   cout << num<< " \n";
   num--;
   seq(num);  // Recursive call to the function
}

int main(){
  int num;
  cout << "enter the number : ";
  cin >> num;
    seq(num);   // Call the function to start the recursion
}
