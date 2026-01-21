#include <bits/stdc++.h>
using namespace std;

int main() {

    // ---------------------------------------------------
    // 1️⃣  PERMUTATION OF NUMBERS
    // ---------------------------------------------------
    // A permutation means arranging elements in *all possible orders*.
    // For n elements, there are n! total permutations.
    // Example: {1, 2, 3} → 6 permutations (3! = 6)

    vector<int> nums = {1, 2, 3};
    
    cout << "---- Permutations of Numbers ----" << endl;

    // Sort first to start from smallest lexicographic order
    sort(nums.begin(), nums.end());           //sorting is neccesary other wise if not soretd it can statrt to the poiint where this is lying in the number of permuatation after sorting 

    do {
        for (int x : nums) cout << x << " ";
        cout << endl;
    } while (next_permutation(nums.begin(), nums.end()));                 // for generating the next permutation

    /*
       Output:
       1 2 3
       1 3 2
       2 1 3
       2 3 1
       3 1 2
       3 2 1
       
       🔹 next_permutation() rearranges to next lexicographically greater order.
       🔹 It stops when we reach the last (descending) permutation.
    */




    // ---------------------------------------------------
    // 2️⃣  PERMUTATION OF STRING / CHARACTERS
    // ---------------------------------------------------
    // A string behaves like a vector<char> internally.
    // So we can directly use next_permutation() on strings too.

    string word = "ABC";

    cout << "\n---- Permutations of String ----" << endl;

    sort(word.begin(), word.end());  // Start from "ABC"

    do {
        cout << word << endl;
    } while (next_permutation(word.begin(), word.end()));

    /*
       Output:
       ABC
       ACB
       BAC
       BCA
       CAB
       CBA

       🔹 Works exactly like numbers — rearranges letters in all possible ways.
    */




    // ---------------------------------------------------
    // 3️⃣  PERMUTATION OF PAIRS
    // ---------------------------------------------------
    // Works on vector<pair<int,int>> too.
    // Here, pairs are compared lexicographically:
    // (a,b) < (c,d) → if a<c, or if a==c and b<d.

    vector<pair<int,int>> vp = {{1,2}, {2,3}, {3,1}};

    cout << "\n---- Permutations of Pairs ----" << endl;

    sort(vp.begin(), vp.end());  // Sorting to start from lexicographically smallest

    do {
        for (auto p : vp)
            cout << "(" << p.first << "," << p.second << ") ";
        cout << endl;
    } while (next_permutation(vp.begin(), vp.end()));

    /*
       Output:
       (1,2) (2,3) (3,1)
       (1,2) (3,1) (2,3)
       (2,3) (1,2) (3,1)
       (2,3) (3,1) (1,2)
       (3,1) (1,2) (2,3)
       (3,1) (2,3) (1,2)
       
       🔹 Works because pair<int,int> supports comparison (<) by default.
       🔹 You can define your own comparator if you want a custom order.
    */


    // ---------------------------------------------------
    // 🔚 Summary
    // ---------------------------------------------------
    /*
        ✅ next_permutation(begin, end)
           → rearranges elements to the next lexicographically greater order.
           → returns false when the current arrangement is the last one.

        ✅ Works with any container that supports random access:
           - vector<int>
           - string
           - vector<pair<int,int>>
           - even array (like int arr[3])

        ✅ To generate *all* permutations, always sort first.
           Otherwise, it starts from whatever order you give and only goes "forward" lexicographically.
    */

    return 0;
}
