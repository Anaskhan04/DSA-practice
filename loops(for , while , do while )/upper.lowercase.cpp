#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "enter a Char : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "smaller case ";
    }
    else
    {
        cout << "upper case";
    }

    return 0;
}