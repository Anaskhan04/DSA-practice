#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "enter a number :";
    cin >> num;

    // using for loop
    for (int i = 1; i <= num; i++)
    {
        if (int div = i % 3 == 0)
        {
            sum += i;
        }
    };
    cout << "sum of numbers divisible by 3 is :" << sum;

    // using while loop
    int i = 1;
    while (i <= num)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        i++;
    }
    cout << "sum of all num div by 3 is :" << sum;

    // using do while loop
    int i = 0;
    do
    {
        i++;
        if (num % i == 0)
        {
            sum += i;
        }
    } while (i <= num);

    cout << "sum of all num div by 3 is :" << sum;
}
