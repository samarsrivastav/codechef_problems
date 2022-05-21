#include <iostream>
using namespace std;
int main(){
 int money,num,h,f,t,o;
 cin>>money;

 h=money/100;
 money=money-h*100;

 f=money/50;
 money=money-f*50;

 t=money/20;
 o=money-t*20;

 

cout<<" "<<h<<" "<<f<<" "<<t<<" "<<o<<" ";





    return 0;
}