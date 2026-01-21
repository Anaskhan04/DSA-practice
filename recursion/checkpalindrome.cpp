#include <bits/stdc++.h>
using namespace std;



//method 1 
bool checkpalindrome(string s, int l, int r)
{
    // if(r==0 || r==1) return true;
    if(l >=r) return true;

    if (s[l] != s[r]) return false;

    return checkpalindrome(s, l + 1, r - 1);
}



//method 2 
bool checkpalindrome(string s, int l, int r)
{
    if(l >=r) return true;

    return (s[l] == s[r]) && checkpalindrome(s, l + 1, r - 1);
}

int main()
{
    
    string s = "abcba";
    cout << checkpalindrome(s, 0, s.size()-1);
}