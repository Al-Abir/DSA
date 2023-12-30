#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[], int n){
  
       for(int i = 1; i <=n ; i ++)
       {
         if(arr[i]<arr[i-1]){
              return false;
         }
       }
       return true;
}


int main(){

  int a[]= {10,29,34,23,56};
  int size = sizeof(a)/sizeof(a[0]);

  bool output = issorted(a,size);
  if(output==true){
    cout<<"Array is Sorted"<<endl;
  }else{
    cout<<"Array is not sorted"<<endl;
  }

}