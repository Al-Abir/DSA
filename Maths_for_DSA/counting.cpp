#include<bits/stdc++.h>
using namespace std;
int count(int n){
   int count =0;
   while(n>0){
       int last_digit = n%10;
       count +=1;
       n = n/10;  //time complexity log10(n);
   }
   return count;

}
int main(){

     int n;
     cin>>n;

    int output = count(n);
    cout<<output;
    return 0;
}