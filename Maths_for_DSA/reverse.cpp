#include<bits/stdc++.h>
using namespace std;
int count(int n){
     int rev = 0;
        while(n!=0){
           int last = n%10;
           cout<<rev<<endl;
        if((rev>INT_MAX/10) || (rev<INT_MIN/10)){
           return 0;
         }
           rev = (rev*10)+last;
           n /=10;

         }
        //return rev;

}
int main(){

     int n;
     cin>>n;

    int output = count(n);
    cout<<output;
    return 0;
}