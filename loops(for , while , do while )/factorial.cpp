#include <iostream>
using namespace std;

int main()
{
    int num, fact = 1, i = 1;
    cout << "enter a num : ";
    cin >> num;

    // using for loop
    for (i; i <= num; i++)
    {
        fact = fact * i;
    }
    cout << "factorial is " << fact;

    // while loop
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    cout << "factorial is " << fact;

    // do while loop
    do
    {
        fact = fact * i;
        i++;
    } while (i <= num);
    cout << "factorial is :" << fact;
}