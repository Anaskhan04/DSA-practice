#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// dynamic array. Its capacity can grow as you add element is to double the capacity
int main()
{
    //   vector<int> v1; //intiializing
    vector<int> v1(2, 5);
    // cout << v1 << endl;
    for (auto it : v1)
    {
        cout << "Looping: " << it << endl;
    };
    // function in vector
    //    v1.push_back(25);   // Add an element to the end
    //    v1.emplace_back(29); // Equivalent to push_back
    //    v1.pop_back(); // Removes the last element

    //    cout << "to find the size of vector(no of element  ata  moment )  : " << v1.size() << endl;
    //    cout << " total capacity that the vector can hold : " << v1.capacity() << endl;
    //    cout << "First element (operator[]): " << v1[0] << endl;
    //    cout << "Last element (size-1): " << v1[v1.size()-1] << endl;
    //    cout << "First element (.front()): " << v1.front() << endl;
    //    cout << "Last element (.back()): " << v1.back() << endl;
    //    cout << "Element at index 2 (.at()): " << v1.at(2) << endl;

    vector<int> v2 = {1, 2, 3, 4, 5};
    // why to use iterator "vector<int> ::iterator it = v2.----" this is because this work better with all the stl and make it effectnat to work.
    // vector<int>::iterator it = v2.begin(); // this is used to point to the location of the first  value in the variable .
    // cout << *(it);   //* is used to print the values
    // return 0;

    // loop using iterator
    // for (auto it = v2.begin(); it != v2.end(); it++) // auto is = vector<int>::iterator
    // {
    //     cout << *(it) << endl;
    // }

    // looping using iterator when you dont know the start and end of it and want to loop at all elements
    // for (auto it : v2)
    // {
    //     cout << "Looping: " << it << endl;
    // }

    // if you want to erase/delete
    //  v2.erase(v2.begin());
    //  cout << "Element at index 2 after erase: " << v2[2] << endl;

    // erasing element in range
    // v2.erase(v2.begin(), v2.begin()+2);
    // cout << "Element at index 2 after erase: " << v2[0] << endl;
}