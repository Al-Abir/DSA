#include <bits/stdc++.h>
using namespace std;
const int N   = (int) 1e6+5;
const int M   = (int) 1e9+5;
const int mod = (int) 1000000007;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int main(){
   Faster;
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> a(n);
      int pos=0,neg=0;
      for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]>0)pos++;
         else neg++;
      }
      int ans=0;
      while(neg>pos){
         neg--;
         pos++;
         ans++;
      }
      if(neg%2==1){
         ans++;
      }
      cout<<ans<<endl;
   }
   return 0;
}
