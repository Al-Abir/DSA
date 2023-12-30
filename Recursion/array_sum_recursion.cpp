#include<bits/stdc++.h>
using namespace std;

int getSum(int arr[], int index){
//base case
  if(index==0){
    return arr[0];
  }
  
  int s = getSum(arr,index-1);
   cout<<s<<endl;
   int sum = s + arr[index];

   return sum;

}


int main(){

  int a[]={ 10,28,30,32,54};
  int size = 4;

  //sum
  int s = getSum(a,size);
  cout<<"the result is "<<s<<endl;
    return 0;
}