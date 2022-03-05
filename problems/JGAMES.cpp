#include <iostream>
using namespace std;
int main(){
 int t{};
 cin>>t;
 for (int i = 1; i <=t; i++)
 {
     int x{},y{};
     cin>>x>>y;
   for (i = 1; i <=y; i++)
   {
     x++;
   }
   if (x%2==0)
   {
       cout<<"janmansh"<<endl;
   }
   else{
   cout<<"jay"<<endl;
   }
   
   
 }
 


    return 0;
}