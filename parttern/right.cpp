#include<bits/stdc++.h>
using namespace std;
/*int main(){


     for(char i ='A'; i<='E';i++){
        for(char j ='A'; j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
     }


    return 0;
}*/

void alphabet(int n){

     int num=65;
     for(int i =1;i<=n;i++){
        for(int j=1; j<=i;j++){
            
            char ch = char(num);
            cout<<ch<<" ";

        }
        num+=1;
        cout<<endl;
     }

}

int main(){
    int n =5;
    alphabet(n);
    return 0;

}