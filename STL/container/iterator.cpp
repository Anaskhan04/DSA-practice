#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v={1,2,3,4,5};

    // USING THE ITERATOR TO PRINT THE VECTOR FROM END BUT IT NEED TO"IT--"" FRO ACCESSING LAST ELEMENT BCZ IF WE DONT USE IT
  //IT WILL POINT TO THE END OF VECTOR AFTER THE LAST ELEMENT
     // AND WE NEED TO DECREMENT IT TO ACCESS THE LAST ELEMENT
    vector <int >::iterator it=v.end();
    it--;
    cout << *it<< endl;

    // USING THE ITERATOR TO PRINT THE VECTOR FROM BEGINNING
    vector <int >::iterator it=v.begin();
    cout << *it<< endl;

//USING THE REVERSE ITERATOR TO PRINT THE VECTOR FROM END BUT USING "RBEGIN()" TO ACCESS THE LAST ELEMENT AND"REVERSE_ITERATOR "
// TO ACCESS THE VECTOR IN REVERSE ORDER
    vector <int>::reverse_iterator it=v.rbegin();
    it++;
    cout << *it<< endl;


}

