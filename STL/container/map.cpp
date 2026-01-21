#include <bits/stdc++.h>
using namespace std;

void explainMap()
{
    // A map stores unique keys in sorted order (based on the key).
    map<int, int> mpp;                    // keys = int, values = int
    map<int, pair<int, int>> mpp2;        // keys = int, values = pair<int,int>
    map<pair<int, int>, int> mpp3;        // keys = pair<int,int>, values = int

    // Basic insertions
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // Pair-key map example
    mpp3[{2, 3}] = 10;

    cout << "Contents of mpp:\n";
    for (auto it : mpp)
    {
        cout << "Key: " << it.first << ", Value: " << it.second << endl;
    }

    cout << "\nValue for key 1: " << mpp[1] << endl;
    // Accessing a non-existent key using [] creates it with a default value (0 for int)
    cout << "Value for key 5: " << mpp[5] << " (created by default)\n";

    // -----------------------------
    // FIND FUNCTION
    // -----------------------------
    auto it = mpp.find(3);
    if (it != mpp.end())
        cout << "\nFound key 3 → Value: " << it->second << endl;
    else
        cout << "\nKey 3 not found.\n";

    it = mpp.find(5);
    if (it != mpp.end())
        cout << "Found key 5 → Value: " << it->second << endl;
    else
        cout << "Key 5 not found.\n";

    // -----------------------------
    // LOWER_BOUND and UPPER_BOUND
    // -----------------------------
    /*
       lower_bound(x): returns iterator to the first element
                       whose key >= x
       upper_bound(x): returns iterator to the first element
                       whose key > x
    */
    cout << "\nUsing lower_bound() and upper_bound():\n";

    auto itlow = mpp.lower_bound(2);
    if (itlow != mpp.end())
        cout << "lower_bound(2): Key = " << itlow->first << ", Value = " << itlow->second << endl;
    else
        cout << "lower_bound(2): Not found (no key >= 2)\n";

    auto itup = mpp.upper_bound(2);
    if (itup != mpp.end())
        cout << "upper_bound(2): Key = " << itup->first << ", Value = " << itup->second << endl;
    else
        cout << "upper_bound(2): Not found (no key > 2)\n";

    // -----------------------------
    // PAIR-KEY MAP OUTPUT
    // -----------------------------
    cout << "\nContents of mpp3 (pair as key):\n";
    for (auto it : mpp3)
    {
        cout << "Key: {" << it.first.first << "," << it.first.second << "} "
             << "Value: " << it.second << endl;
    }
}

int main()
{
    explainMap();
    return 0;
}
