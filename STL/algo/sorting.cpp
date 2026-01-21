#include <bits/stdc++.h>
using namespace std;

// SEFLF DECLARED METHOD TO SORT IT 
bool comp ( pair <int , int> p1, pair <int , int> p2){
   if (p1.second < p2.second)  return true;
   else return false;

   if(p1.second == p2.second){
      if(p1.first > p2.first) return true;
      else return false;
   }
}

int main(){

vector < int > v = { 4,5,8,2,3};
 auto it = v.begin(); 
 auto it2 = v.end();

 //method2
 sort(it,it2);
 for ( int x : v){
    cout << x << " ";
 
 }
 //  method 1
sort(v.begin(), v.end() );


//method 3 
sort(v.begin(), v.end(), greater<int>());           // this make the sorting in decending order.



//IF WANT TO DO SORTING AS PER YOUR WISH 

vector < pair<int , int>> v2 = {{1,2},{3,1},{5,6} , {2,3}};



sort(v2.begin(),v2.end(),comp);    //COMP is here a comprator 

for ( auto x : v2){
   cout << x.first << " " << x.second << endl;

}

}
