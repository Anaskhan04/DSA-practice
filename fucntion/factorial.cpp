#include <iostream>
using namespace std;

// defining fucntion to find factorail
int Factnum(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;
    cout << "enter num :";
    cin >> num;
    cout << Factnum(num);
}