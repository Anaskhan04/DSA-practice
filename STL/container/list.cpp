#include <bits/stdc++.h>   // THIS MAKE INCLUDEA ALLL TYPE OF LIBRABRIES
using namespace std;

int main() {

// MOST OF THE FUCNTION VECTOR HAVE IS SAME HERE ALSO other than that 

list<int> l1;                                     //initialization 
l1.insert(l1.begin(),3,30);                       // ADDIN VALUES 
cout << l1.front() << endl;
  
l1.push_back(10);  // same as vector 
l1.emplace_back(20);  // same as vector 

l1.push_front(1);         // doesn't work in vector 
l1.push_back(2);          // doesn't work in vector 
cout << l1.back() ;        // doesn't work in vector 
cout << l1.front();          // doesn't work in vector 


// rest functions same as vector
// begin, end, rbegin, rend, clear, insert, size, swap

for( int x :l1){
    cout << x << " ";

}



list < int > l6 ={1,2,3,4,5,6,8};
auto it2 = l6.begin();                          //for pointing to the point for iterator at begining 
auto it2 = next(l6.begin(), 2);                     //for pointing to the point for iterator at second psotion using NEXT keyword // next and prev are set accordingly.
l6.insert(it2, 9);
 for ( int y : l6){
    cout << y << " ";

}

//⚠️ You can’t use indexing like l[0] — list doesn’t support random access.

}


