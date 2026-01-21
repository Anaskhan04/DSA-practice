#include <bits/stdc++.h>
using namespace std;

int main(){

    int num1 = 7;
    int cnt1 = __builtin_popcount(num1);       // for 1-32 bit integer
    cout << cnt1 << endl;   // prints 3         111

    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);      // for 1-64 bit integer
    cout << cnt2 << endl;   //print 24                111111111111111111111111
}


