#include <bits/stdc++.h>
using namespace std;

int factN(int n, int fact= 1) { 
    if (n<1) return fact;
    fact=fact*n;
    factN(n-1, fact); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << factN(n);
}



//method second 

int factorial( int n ){
    if(n==0) return 1;

    return n*factorial(n-1);
}

int main(){
    int n;
    cout << " enter a number :";
    cin >> n;
    cout << factorial (n);
}