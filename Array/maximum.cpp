#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[]={5,4,9,12,8};
    int max = a[0];
     int n= sizeof(a)/sizeof(int);
    for(int i= 1;i<n;i++){
      if(max<a[i])
          max=a[i];
    }
    cout<<max;

   return 0;
}