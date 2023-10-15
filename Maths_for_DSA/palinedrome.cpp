#include<bits/stdc++.h>
using namespace std;
void  palinedrome(int n){
         int num =0;
         int dum = n;
         while(n>0){
            int last = n%10;
            n = n/10;
            num = (num*10)+last;
            
         }
      if(num == dum){
        cout<<"True"; 
      }else{
        cout<<"False";
      }
}
int main(){

     int n;
     cin>>n;
     palinedrome(n);
    // int  output = 
    // if(output==n){
    //     cout<<"Palinedrom "<<output;
    // }else{
    //     cout<<"Not Palinedrom ";
    // }
    return 0;
}