#include <bits/stdc++.h>
using namespace std;

int c=0;
int name(){
    if(c==5) return 0;    // Base case to stop recursion
    cout << "Anas \n";
    c++;
    name();  // Recursive call to the function
}

int main(){
    name();   // Call the function to start the
}
