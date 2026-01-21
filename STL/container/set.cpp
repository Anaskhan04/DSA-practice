#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // duplicate ignored
    st.insert(4);
    st.insert(3); // {1, 2, 3, 4}

    // find()
    auto itA = st.find(3); // points to 3
    auto itB = st.find(6); // element not found → st.end()

    // erase()
    st.erase(5); // erases 5 if it exists (otherwise does nothing)

    int cnt = st.count(1); // returns 1 if found, else 0

    auto itC = st.find(3);
    if (itC != st.end()) st.erase(itC); // erase element 3

    // erase range [it1, it2)
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // removes elements between 2 and 4 (2, 3)

    // Demonstrate lower_bound and upper_bound on vector
    vector<int> v = {1, 2, 2, 3, 5, 8};
    auto vit1 = lower_bound(v.begin(), v.end(), 2);
    auto vit2 = upper_bound(v.begin(), v.end(), 2);

    cout << "Vector lower_bound(2): index " << (vit1 - v.begin()) << endl;
    cout << "Vector upper_bound(2): index " << (vit2 - v.begin()) << endl;

    // Same concept works on set (but returns iterators, not indexes)
    auto sit1 = st.lower_bound(2); // first element >= 2
    auto sit2 = st.upper_bound(3); // first element > 3

    if (sit1 != st.end())
        cout << "Set lower_bound(2): " << *sit1 << endl;
    if (sit2 != st.end())
        cout << "Set upper_bound(3): " << *sit2 << endl;
}

int main() {
    explainSet();
    return 0;
}
