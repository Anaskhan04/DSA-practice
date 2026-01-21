#include <iostream>
using namespace std;


void printn(int n){
    int result =0;
int pow=1;
    while(n>0){
    int rem =n%2;
     n=n/2;
    result=result +(rem*pow);
    pow *=10;
    }
    cout << result << endl;
}


int main(){

    int n;
    cout << "enter the number :";
    cin >> n;
    printn(n);
    return 0;
}