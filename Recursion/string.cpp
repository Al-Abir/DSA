// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;
string paline(string str){
    string checc;
      for(int i =0; i<str.length()/2; i++){
              
              if(str[i] != str[str.length()-i-1]){
                return "false";
              }
          
      }return "true";

}

int main(){

   string str = "ABCDCBA";

    cout<<paline(str);


    return 0;
}
