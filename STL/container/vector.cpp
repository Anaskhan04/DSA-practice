#include <bits/stdc++.h>
using namespace std;

int main()
{

      vector<int> v; // empty vector of int
    vector<int> v2(5); // size 5, all elements = 0
    vector<int> v3(5, 10); // size 5, all elements = 10
    vector<int> v4 = {1, 2, 3, 4}; // initializer list
    vector< pair<int,int>> v6;

    vector<int> anas;
    anas.push_back(5);     // PUSH_BACK ADDS AN ELEMENT TO THE END OF THE VECTOR
    anas.emplace_back(20); // EMPLACE_BACK IS USED TO CONSTRUCT AN OBJECT IN PLACE, IT CAN BE MORE EFFICIENT THAN PUSH_BACK
    cout << anas[1] << endl;

    vector<pair<int, int>> anas2;
    anas2.push_back({1, 2});
    anas2.emplace_back(3, 4);
    cout << anas2[1].second << endl; // ACCESSING SECOND ELEMENT OF SECOND PAIR IN VECTOR ({1,2}, {3,4})

    // INSERTING ELEMENTS INTO THE VECTOR

    vector<int> v1 = {1, 2, 3, 4, 5};
    v1.insert(v1.begin() + 2, 70); // INSERTING 70 AT INDEX 2
    cout << v1[2] << endl;

    v1.insert(v1.begin(), 2, 10); // INSERTING 2 COPIES OF 10 AT THE BEGINNING
    cout << v1[0, 2] << endl;

    // FOR PRINTING THE VECTOR USING RANGE-BASED FOR LOOP
    for (auto it : v1)
    { 
        cout << it << " ";
    }
    

    //SIZE FUCNTION 
  cout << v1.size();


  // SWAPPING FUCNTION
   vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v3 = {6, 7, 8, 9, 10};
    v1.swap(v3);
    cout << v3[2];

    //CLEAR FUCNTUION 
    v3.clear();
    cout << v3.size();   // 0 ELEMENT LEFT

    
    v.begin(), v.end(), v.front(), v.back()  ;


    // FOR PRINTING ALL ELEMENT USING LONG FORMAT OF ITERATOR FUNCTION
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    { // USING ITERATOR TO PRINT THE VECTOR
        cout << *it << " ";
    }
    cout << endl;

    // ERASE FUNCTION : REMOVE ELEMENTS FROM THE VECTOR

    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2); // ERASING THE ELEMENT AT INDEX 3 (4 IN THIS CASE)
    cout << v[3] << endl;

    // REMOVING A RANGE OF ELEMENTS FROM THE VECTOR
    vector<int> v3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v3.erase(v3.begin() + 1, v3.begin() + 5);
    cout << v3[1] << endl; // PRINTING THE LAST ELEMENT OF VECTOR AFTER ERASING THE ELEMENTS USING RANGE OF ELEMENTS



    //  INSERT FUNCTION

    vector<int> v2 = {1, 2, 3, 4, 5};
    v2.insert(v2.begin() + 2, 70); // INSERTING 70 AT INDEX 2
    cout << v2[2];

    // INSERTING MANY VALUE AT A TIME
    v2.insert(v2.begin() + 2, 2, 30); // { 1,2,30,30,4,5}
    cout << v2[5];                    // 4

    // MERGING TWO VECTORS OR COPYING THE VECTOR INTO AN OTHER
    vector<int> v5 = {1, 2, 3, 4, 5};
    vector<int> v4 = {6, 7, 8, 9, 10};
    v4.insert(v4.begin(), v5.begin(), v5.end()); // MERGING V5 INTO V4 AT THE BEGINNING

    for (auto it : v4) // USING RANGE-BASED FOR LOOP TO PRINT THE MERGED VECTOR
    {
        cout << it << " ";
    }


    // FUNCTION FOR SORTING 
    vector <int> v4 = {6, 8,1,2,4,7};
    sort(v4.begin(), v4.end());
    for(auto it : v4) {
        cout << it << " ";
    }


//BOTH DPESNT WORK IN VECTOR BUT WORK IN LIST 

    // push_front()
    // pop_front()


//     🧠 The Core Difference in One Line

// Use vector when you mostly read or add at the end.
// Use list when you need to insert or delete often in the middle.
// }