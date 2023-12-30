#include<bits/stdc++.h>
using namespace std;

int binary(int a[], int m, int q){
   
   int s=0;
   int e =m;
   while(s<=e){
     
      int mid = (s+e)/2;
      if(a[mid]==q){
        return mid;
      }
      else if(a[mid]>q){
        e =mid-1;
      }else{
        s=mid+1;
      }
   }
   return -1;
}

int main(){

      int n;
      cin>>n;
      int arr[n];
      for(int i =1; i<=n; i++){
        cin>>arr[i];
      }

     int k;
     cin>>k;
     int output;
     output = binary(arr,n,k);
     cout<<output;
    return 0;
}