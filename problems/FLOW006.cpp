#include <iostream>
using namespace std;

int main() {
int test_cases{};
cin>>test_cases;
for(int i{1};i<=test_cases;i++){
    int num{},s{};
    cin>>num;
    while(num!=0){
    s=s+num%10;
    num=num/10;
    }
cout<<s<<endl;
}
	return 0;
}
