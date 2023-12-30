#include<bits/stdc++.h>
using namespace std;
int main(){
     int a[5]={3,2,1,4,6};
     cout<<"\nInput list is \n";
    for(int i=0;i<5;i++)  
    {  
        cout <<a[i]<<"\t";  
    } 
    cout<<endl;
     for(int k=1;k<5;k++)
     {
        int temp = a[k];
        int j = k-1;
           while(temp <= a[j] && j>=0){
              a[j+1]=a[j];
              j=j-1;
           }
          a[j+1]=temp;

     }
   cout<<"Sorted Array\n";
   for(int i=0;i<5;i++){
    cout<<a[i]<< " ";
   }



    return 0;
}