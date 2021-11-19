#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int t{};
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    double quantity{}, price{};
    cin >> quantity >> price;
    double total = (quantity * price);
    double discount = .10 * (total);
    double price_total{};
    if (quantity > 1000)
    {
      //cout << setprecision(6);
      price_total = (total)-discount;
    }
    else
    {
      // cout <<setprecision(6);
      price_total = total;
    }
    cout << fixed << setprecision(6) << price_total << endl; //fixed likhna jruri hota h
  }

  return 0;
}