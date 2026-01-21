#include <bits/stdc++.h>
using namespace std;
int c=1;
int seq(int num){
    if(c>num) return 0;    // Base case to stop recursion
   cout << c << " \n";
   c++;
   seq(num);  // Recursive call to the function
}

int main(){
  int num;
  cout << "enter the number : ";
  cin >> num;
    seq(num);   // Call the function to start the recursion
}
