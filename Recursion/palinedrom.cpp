#include<bits/stdc++.h>
using namespace std;
bool checkplaindrom(string str, int i, int j){

  if(i>j){
    return true;
  }
  if(str[i] != str[j]){
    return false;

  }else{
    checkplaindrom(str, i+1,j-1);
  }
}

int main(){

  string name ="hoooh";

 
 bool ispalidrom = checkplaindrom(name,0,name.length()-1);

 if(ispalidrom){
    cout<<"Number is paline drom";
 }else{
    cout<<"Number is not paline drom";
 }

return 0;
}