#include<bits/stdc++.h>
using namespace std;
int binary(int a[],int tobereached, int start, int last){
  if(start>last){
    return -1;
  }

  int mid = (start+last)/2;

  if(a[mid]==tobereached){
    return mid;
  }
  else if(a[mid]>tobereached){
    return binary(a,tobereached,start,mid-1);
  }else{
    //a[mid]<tobereached
    return binary(a,tobereached,mid+1,last);
  }

}

int main(){

    int arr[]={10,20,23,34,45,65};
    cout<<binary(arr,34,0,6)<<endl;

    return 0;

}