#include <iostream>
using namespace std;

int main(){

   int t;
   cin>>t;
   for (int i = 1; i <= t; i++)
   {
       
       int a{},b{},c,d;
       cin>>a>>b;
       cin>>c>>d;
       if (a<=c && b<=d)
       {
          cout<<"possible"<<endl;
       }
       else
       cout<<"impossible"<<endl;
       
   }
   




    return 0;
}