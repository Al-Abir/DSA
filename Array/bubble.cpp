#include<bits/stdc++.h>
using namespace std;
int main(){
        
       int a[5]= {8,4,5,3,1};
       int temp;
       for(int i =0;i<4;i++)
      {
          for(int j=0;j<4-i;j++){
                if(a[j]>a[j+1])
                {
                  temp = a[j+1];
                  a[j+1]=a[j];
                  a[j]=temp;
                }

          }


       }
           cout<<" Sorting array \n";
           for(int i=0;i<5;i++){

              cout<<a[i]<< " ";
           }
          cout<<endl;



    return 0;
}