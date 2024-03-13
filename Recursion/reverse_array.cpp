#include<bits/stdc++.h>
using namespace std;
void print(int *arr, int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void taverse(int *arr,int n){
       int a[n];
      for(int i =n-1; i>=0; i--){
          a[n-i-1]= arr[i];
      }
      print(a,n);

}
void array_taverse(int arr[], int n){
    int i =0;  int j = n-1;
    while(i<j){
        swap(arr[i],arr[j]);
    i++;
    j--;
    }

    print(arr, n);

}
int array_recursion(int arr[], int start, int end){
    
         if(start<end){
            swap(arr[start],arr[end]);
            return array_recursion(arr, start+1,end-1);
         
         }
        
}
int main(){


    int arr[]={10,20,30,40,50};
    int n =5;
    //taverse(arr,n);
    //using swap function
    //array_taverse(arr, n);
    array_recursion(arr,0,n-1);
    print(arr, n);
}
