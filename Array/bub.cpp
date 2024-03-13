//Bubble sort

#include<bits/stdc++.h>
using namespace std;
int main(){

      int a[5]={10,4,5,3,11};
      for(int i=0 ;i<5;i++)
      {
          for(int j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
          }
         cout<<" Step"<<i+1<<" : " ;
         for(int j=0; j<5;j++){
            cout<<a[j]<<" ";
            //cout<<endl;
         }
         cout<<endl;
      }
      cout<<"sorted Array \n";
       for(int j=0; j<5;j++){
            cout<<a[j]<<" ";
       }
    cout<<endl;
    return 0;
}