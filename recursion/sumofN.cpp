#include <bits/stdc++.h>
using namespace std;

int sumN(int n, int sum = 0) { 
    if (n<1) return sum;
    sum=sum+n;
    sumN(n-1, sum); 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << sumN(n);
}
