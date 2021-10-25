#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double const bank_charge{.50};
  double bank_balance{};
  int withdrawal_amount{};

  cin >> withdrawal_amount >> bank_balance;

  //if(withdrawal_amount%5!=0||withdrawal_amount>bank_balance){
  cout << fixed << setprecision(2);
  if (withdrawal_amount + bank_charge > bank_balance)
  {
    cout << bank_balance;
  }
  else if (withdrawal_amount % 5 == 0)
  {
    cout << (bank_balance) - (bank_charge) - (static_cast<double>(withdrawal_amount)) << endl;
  }

  else
    cout << bank_balance;

  return 0;
}
