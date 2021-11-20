#include <iostream>
#include <cmath>
using namespace std;

int main()
{

  int t{};
  cin >> t;
  for (int i{1}; i <= t; i++)
  {
    int num{};
    cin >> num;
    cout << static_cast<int>(sqrt(num)) << endl;
  }

  return 0;
}
