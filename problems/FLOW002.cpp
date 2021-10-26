#include <iostream>
using namespace std;

int main()
{
  int test_cases{};
  cin >> test_cases;
  for (int i{1}; i <= test_cases; i++)
  {
    int num1{}, num2{};
    cin >> num1 >> num2;
    int reminder = num1 % num2;
    cout << reminder << endl;
  }

  return 0;
}