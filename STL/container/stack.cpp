#include <bits\stdc++.h>
using namespace std;
//  .Top → [5]
//        [4]
//        [3]
//        [2]
//        [1]
// Bottom
int main()
{

    stack<int> s1;       // stack work on LIFO
    stack<int> s;        // empty stack
    stack<string> names; // stack of strings
    // only 3 operation work push , pop , top

    s1.push(10);
    s1.push(20);
    s1.emplace(30);
    s1.push(30);
    s1.pop();         // this remvoe teh 30
    cout << s1.top(); // this show the top value at a stack
    s1.empty();




    // You can also choose:

stack<int, vector<int>> s1;  // use vector internally
stack<int, list<int>> s2;    // use list internally


// So the real storage is handled by the underlying container, but you only get stack-style access (push, pop, top).

}