#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   

    ll x;
    cin>>x;
    int count_bit =0;
    for(int i =0; i<32; i++){
        if(((1<<i) & x) >0){
            count_bit++;
        }
    }
    cout<<count_bit;


    return 0;

}