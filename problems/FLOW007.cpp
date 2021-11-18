#include <iostream>
using namespace std;
int main()
{
  int t{}, num{}, reminder{}, rev{};
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    rev = 0;
    cin >> num;
    while (num > 0)
    {
      reminder = num % 10;
      num = num / 10;
      rev = rev * 10 + reminder;
    }
    cout << rev << endl;
  }

  return 0;
}