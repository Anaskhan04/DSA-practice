#include <iostream>
using namespace std;

// comment out other code if runnig any type of loop

int main()
{

    // using while loop
    int a = 1;
    while (a <= 5)
    {
        cout << a;
        a++;
    }
    return 0;

    // using for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << i;
    }
    return 0;

    // using do while loop
    int i = 1;
    do
    {
        cout << ' ' << i;
        i++;
    } while (i <= 5);
    return 0;
}