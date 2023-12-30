#include<bits/stdc++.h>
using namespace std;

void toreverse(string &str, int i, int j){

    if(i>j){
     return;
    }
    swap(str[i],str[j]);
    
    toreverse(str,i+1,j-1);

}

int main(){

   string str = "hello world ";
   int length = str.length();

      toreverse(str,0, length-1);
    cout<<str;
   
    return 0;
}