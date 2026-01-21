#include <iostream>
using namespace std;


void printn(int n){
    int result =0;
int pow=1;
    while(n>0){
    int rem =n%10;
    result=result +(rem*pow);
    n=n/10;
    pow *=2;
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