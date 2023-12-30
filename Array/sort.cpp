#include<bits/stdc++.h>
using namespace std;
int main(){

     int a[]={10,5,6,20};
     int n = sizeof(a)/sizeof(int);
     int temp;
     for(int i=0;i<n;i++){
        for( int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
     }
      cout<<"Sorted Arry ";
      for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
      }

  

    return 0;
}