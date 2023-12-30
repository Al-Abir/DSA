#include<bits/stdc++.h>
using namespace std;
int linear(int a[], int n, int k){

  for(int i=1; i<=n; i++){
        if(a[i]==k){
          return i;
        }

  }
  return -1;

}
int main(){
  //linear search

  
  int n;
  cin>>n;
  int arr[n];
  for(int i=1; i<=n; i++){
    cin>>arr[i];
  }

  int k;
  cin>>k;
  cout<<linear(arr,n,k)<<endl;
  return 0;
}