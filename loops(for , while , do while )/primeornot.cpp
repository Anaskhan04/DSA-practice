#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "enter a num : ";
  cin >> num;
  int i = 2;

  // // using for loop
  for (int i; i < num - 1; i++)
  {
    if (num % i == 0)
    {
      cout << " not a prime numeber";
    }
    else
    {
      cout << " prime number";
    }

    // // usig while loop
    int i, count = 0;
    while (i < num)
    {
      if (num % i == 0)
      {
        cout << "not prime";
      }
      else
      {
        cout << "prime";
      }
      i++;

      // using do while loop
      do
      {
        if (num % i == 0)
        {
          cout << "not prime number";
          break;
        }
        else
        {
          cout << "prime number";
          break;
        }
        i++;
      } while (i < num);

      return 0;
    }
  }
}