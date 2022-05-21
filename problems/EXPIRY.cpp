#include <iostream>
using namespace std;

bool expiry(float n ,float k ,float m){
      
      float x=n/k;
      if(x<=m){
          return 1;
      }
  return 0;
}
int main(){
   int t;
   cin>>t;
   for (int i = 1; i <=t; i++)
   { int  n,k,m;
     cin>>n>>k>>m;
       bool yup=expiry(n,k,m);
       if (yup)
       {
           cout<<"yes"<<endl;
       }
       else
       cout<<"no"<<endl;
   }
   




    return 0;
}