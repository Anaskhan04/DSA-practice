#include <iostream>
using namespace std;

// definiting the fucntion to sum from 1 - num
int sumN(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int num ;
    cout << "enter num : ";
    cin >> num;
    cout << sumN(num);
}