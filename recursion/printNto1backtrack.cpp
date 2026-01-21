#include <bits/stdc++.h>
using namespace std;


int print(int num,int c=0){ // Function to print numbers from 1 to N using backtracking dont use c as global varibale bc 
    // it will not work properly in case of multiple calls
if(c==num) return 0;
c++;
print(num,c);
cout << c<< " \n";
}

int main(){
    int num;
    cout << "enter number:";
    cin >> num;
    print(num);
}
