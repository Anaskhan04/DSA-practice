#include <bits/stdc++.h>
using namespace std;
// DEQUE STAND FPR double ended queue


int main()
{
    deque<int> d; // empty deque
    deque<int> d1 = {1, 2, 3, 4};
    deque<int> d2(5, 100); // {100, 100, 100, 100, 100}

    deque<int> d1;
    d1.push_back(3);
    d1.pop_front();
    d1.pop_back();
    cout << d1.front();
}

// rest functions same as vector or lis tor dequee you can do anntyhign g
// begin, end, rbegin, rend, clear, insert, size, swap