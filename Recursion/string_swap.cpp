#include<bits/stdc++.h>
using namespace std;
int main(){

   string str = "Hriody";
   int length = str.length();

 // strindg reverse
   int i=0;
   int j = length-1;
   while(i<j){
    
     swap(str[i],str[j]);
     i++;
     j--;

   }
   cout<<str;

    return 0;
}