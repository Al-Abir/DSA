#include<bits/stdc++.h>
using namespace std;
void print(int a[],int n){
    cout<<"Size of array is "<<n<<endl;
    for(int i = 0; i<n; i++){
        cout<<a[i] <<" ";
    }
    cout<<endl;
}

bool linear_search(int arr[], int size, int k){


   print(arr,size);
   //base case 
   if(size==0){
    return false;
   }
   if(arr[0]==k){
    return true;
   }else{
   bool remaing = linear_search(arr+1,size-1,k);
   return remaing;
   }
}

int main(){

      int arr[]={3,5,1,2,6};
      int size =5;
      int k =6;
      bool ans = linear_search(arr,size,k);
    if(ans==true){
        cout<<"found";

    }else{
        cout<<" not found";
    }
    return 0;
}