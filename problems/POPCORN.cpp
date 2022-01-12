#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
int t{};
cin>>t;
for (int i = 1; i <= t; i++)
{
    int a1{},a2{},b1{},b2{},c1{},c2{};
 cin>>a1>>a2;
 cin>>b1>>b2;
 cin>>c1>>c2;
vector <int> data{};

int total_1=(a1+a2);
int total_2=(b1+b2);
int total_3=(c1+c2);
data.push_back(total_1);
data.push_back(total_2);
data.push_back(total_3);
cout<< *max_element(data.begin(), data.end());

    







}







    return 0;
}