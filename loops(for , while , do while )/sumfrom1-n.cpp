#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout << "enter a number :";
    cin >> num ;

    // // using for loop
    for(int i=1;i<=num;i++){
       sum+=i; 
    }
    cout << "total sum is : " << sum  ;

    // // using while loop
    int i=1;
       while(i<=num){
         sum+=i; 
         i++;  }
        cout  << sum ;
        return 0;

    // using do while loop
    int i=0;
    do{i++; sum+=i; }while(i<num);
    cout << sum << ' ';
    return 0;
}