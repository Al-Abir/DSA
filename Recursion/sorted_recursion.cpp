#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int s){

     // base case 
     if(s==0 || s==1){
        return true;
     }
     if(arr[0]>arr[1]){
        return false;
     }else{
       
        return isSorted(arr+1,s-1);
     }

}

int main(){

   //sorted check
    int a[]={10,22,23,3,45};
    int size = 5;
    bool ans = isSorted(a,size);
    if(ans){
        cout<<"array is sorted";

    }else{
        cout<<"array is not sorted";
    }
  
}