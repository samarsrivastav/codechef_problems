#include <iostream>
using namespace std;
int sum(int arr[],int n){
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
        count+=arr[i];
    }
    return count;
}
int average(int arr[],int n,int x){
    int sum1=sum(arr,n);
    int ans=(x*n)-sum1;

    return ans;
}
int main(){
 int t;
 cin>>t;
 for (int i = 1; i <= t; i++)
 { 
     int n,x;
     cin>>n>>x;
     int box[1000000]={};
    for (int j = 0; j <n-1; j++)
    {
        cin>>box[j];
    }
    int zero{};
    int ans=average(box,n,x);
    if (ans<0)
    {
        cout<<zero<<endl;
    }
    else
         cout<<ans<<endl;

    
 }
 



    return 0;
}