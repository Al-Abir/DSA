#include<bits/stdc++.h>
using namespace std;
void print(int n){
    
    //base case
    if(n==0){
        return;
    }
    cout<<"Coding Ninja ";
    return print(n-1);


}
int main(){

     int n;
     cin>>n;

     print(n);

    //  for(int i =0; i<n; i++){
    //     cout<<"Coding Ninja ";
    //  }

}