#include <bits/stdc++.h>
using namespace std;


int c=0;
int print(int num){
if(c==num) return 0;
num--;
print(num);
cout << num+1<<  " \n";
}

int main(){
    int num;
    cout << "enter number:";
    cin >> num;
    print(num);
}