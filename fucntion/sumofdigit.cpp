#include <iostream>
using namespace std;

// sum of its alll digits
int sumD(int num)
{
    int digSum = 0;
    while (num > 0)
    {
        int lastDig = num % 10;             //  %   reminder  ( its give the first right digit of the number)
        num = num / 10;                     // /    qutotent remove the last digit of the number
        digSum = digSum + lastDig;
    }
    return digSum;
}

int main()
{
    int num;
    cout << "enter num :";
    cin >> num;
    cout << sumD(num);

    return 0;
}