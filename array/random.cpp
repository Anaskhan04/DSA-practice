#include <iostream>
using namespace std;



int SumN(int n1 , int n2){
   int sum= n1+n2;
   cout << sum;
   
   return 0;
}

int main() {
int n1,n2;
cin >>n1>>n2;
SumN(n1,n2);
}