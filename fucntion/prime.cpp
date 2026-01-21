#include <iostream>
using namespace std;

int primeN(int num)
{
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << " not prime number ";
            break;
        }
        else
        {
            cout << "prime number";
            break;
        }
    }
}
int main()
{
    int num;
    cout << "enter num : ";
    cin >> num;
    primeN(num);
}
