#include<iostream>
using namespace std;

int fact(int a){
  
  if(a==0)
     return 1;

   int smaller = fact(a-1) ;
   int big = a*smaller;
   return big;
}
int main(){

   int n;
   cin>>n;
   int ans=fact(n);
   cout<<ans<<endl;
   
}