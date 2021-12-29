#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int t{};
    cin>>t;
for(int i{1};i<=t;i++){
  int salary{} ;
  double hra{},da{};
  cin>>salary;
  if(salary<1500){
      hra=.1*salary;
      da=.9*salary;
  }
  else{
      hra=500;
      da=.98*salary;
  }
  double gross_salary=salary+hra+da;
cout<<fixed<<setprecision(2)<<gross_salary<<endl;
}



    return 0;
}