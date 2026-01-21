#include <iostream>
using namespace std;



// PROBLEM 1 (START)


int main()
{
    int i, num;
    cout << "enter num : ";
    cin >> num;
    char ch = 'A';
    for (i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
                    ch++;

        cout << endl;
    }
    return 0;
}