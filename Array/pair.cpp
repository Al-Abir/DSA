#include<bits/stdc++.h>
using namespace std;
void findPair(int a[],int n,int t)
{

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==t){
                    printf("find pair %d %d \n",a[i],a[j]);
                    return;//code end;
                }
            }
        }
      printf("Not find pair");  

}

int main(){

      int a[]={8, 7, 2, 5, 3, 1};
      int target= 10;
      int n = sizeof(a)/sizeof(int);
      findPair(a, n, target );


    return 0;
}