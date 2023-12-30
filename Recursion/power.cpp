#include<iostream>
using namespace std;

  int power(int a){


    if(a==0){
        return 1;
    }

    return 2* power(a-1);

  }

int main(){

   int n;
   cin>>n;

   cout<<power(n)<<endl;

  return 0;
}