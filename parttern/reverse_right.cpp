#include<bits/stdc++.h>
using namespace std;
/*void outer(int a){
  
   for(int i=a;i>=1;i--){
    for(int j=1; j<=i; j++){

     printf("%c",i+65);
    }
    cout<<endl;
   }


}*/

void inner(int a){

    for(int i =0; i<=a; i++){
        for(int j =a; j>=i; j--){
        
        printf("%c",j+65);
        }
        cout<<endl;
    }
}

int main(){
  int n=5;
 // outer(n);
  inner(n);
  return 0;


}