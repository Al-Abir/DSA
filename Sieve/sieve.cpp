#include<bits/stdc++.h>
using namespace std ;
void sieve(int n){
   vector<int> isprime(n+1, true);
   for(int i =2; i * i <=n; i++){
      if(isprime[i]){
        for(int j = i * i; j <= n; j+=i){
            isprime[j]= false;
        }
    }
   }
    for(int i=2; i<=n; i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
 }


int main(){

    int n;
   cin>>n;
   sieve(n);

    return 0;
}