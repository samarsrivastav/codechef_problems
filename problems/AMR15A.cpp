#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int even{}, odd{};
  int num_soldiers{};
  cin >> num_soldiers;
  for (int i = 1; i <= num_soldiers; i++)
  {

    vector<int> wepons{};

    int wepons_num{};
    cin >> wepons_num;
    wepons.push_back(wepons_num);

    for (size_t i = 0; i < wepons.size(); i++)
    {
      if (wepons.at(i) % 2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }
    }
  }
  if (odd >= even)
  {
    cout << "NOT READY" << endl;
  }
  else
    cout << "READY FOR BATTLE" << endl;
  return 0;
}