#include<iostream>
using namespace std;
int main(){
     
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){
        int j=1;
        for(; j<=n-i; j++)
        {
          cout<<" ";
           
        }
        int k=1;
        for(;j<=n;j++)  {
            cout<<k--;
        } 
       
    }



    return 0;
}