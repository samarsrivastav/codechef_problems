#include <iostream>
using namespace std;

int main(){
 int money,num{100},h,f,t,o;
 cin>>money;
 switch (num)
 {
 case 100 : { h=money/100;
       
 }
 
  case 50: { 
       money=money-h*100;
       f=money/50;
        
 }
 
 case 20: { money=money-f*50;
     t=money/20;
      
 }
 
 case 1: {   o=money-t*20;
    //  o=money/1;
       // money=money-o*1;
 }
 
 default:
     break;
 }
cout<<h<<" "<<f<<" "<<t<<" "<<o;
    return 0;
}