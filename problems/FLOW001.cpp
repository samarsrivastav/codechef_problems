#include<iostream>
using namespace std;
int main(){
    // cout<<"number of testcases"<<endl;
    int testcases{};
    cin>>testcases;
    for(int i{1};i<=testcases;i++){
    // cout<<"enter the number you want to add"<<endl;
    int num1{},num2{};
    cin>>num1>>num2;
    int addition=num1+num2;
    cout<<addition<<endl;
    }
    
    return 0;
}