#include<bits/stdc++.h>
using namespace std;
int main(){
        
     int t;
     cin>>t;
     while(t--){
         int n, a, b;
         cin>>n>>a>>b;
         
         if((n==a and n==b) or (a<=n and b<=n and n-b+1>a and n-b+1-a>2 )){
             cout<<"Yes"<<endl;
             
         }
         else{
             cout<<"No"<<endl;
         }
     }
 
    return 0;
}