#include <bits/stdc++.h>
using namespace std;

int main() {
   vector <int > v = { 1,7,8,13,3};
    int c = *max_element(v.begin(),v.end());                 //* is used to access that memory location having highest value 
    cout << c << endl;

    int d= *min_element(v.begin(),v.end());                  //* is used to access that memory location having highest value 
    cout << d << endl;
}
