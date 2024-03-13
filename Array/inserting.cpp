#include<bits/stdc++.h>
using namespace std;
int main(){
     

     int a[100],i=0;
     char choice;
     do{
     cout<<"Please Input the Array "<<i+1<<" Position ";
     cin>>a[i];
     i++;
     cout<<"Do You inset new array"<<"(press Y or y)\n";
     cin>>choice;
     }
     while(choice=='Y' || choice=='y');
     cout<<"Element are \n";
     for(int k=0;k<i;k++){
        cout<<"New array are "<<a[k];
     }


      


    return 0;
}