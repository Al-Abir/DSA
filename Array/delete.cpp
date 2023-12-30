#include<bits/stdc++.h>
using namespace std;
int main(){
      int a[5]={10,20,30,40,50};
      int pos;
      cin>>pos;
      for(int i=pos;i<5;i++){
           a[i]=a[i+1];
      }
    cout<<"The new element are \n";
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
   
    return 0;
}