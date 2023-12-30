#include<bits/stdc++.h>
using namespace std;
int main(){
       

       int a[5]={10,20,30,40,50};
       int pos,num;
       cout<<"Please Input the number postion and number ";
       cin>>pos>>num;
       for(int i=4; i>=pos; i--)
       {
         a[pos]=num;
       }
       cout<<"New Array\n";
       for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
       }


    return 0;
}