#include<iostream>
using namespace std;

int fibo(int n){

       if(n==0|| n==1) {
         
         return n;

       }
       return fibo(n-1)+fibo(n-2);

}



int main(){

    int n;
    cin>>n; 
   
   cout << "\nFibonnaci Series : ";
    int i=0;
   while(i < n) {
      cout << "  " << fibo(i);
      i++;
   }
   cout<<endl;
    cout<<fibo(n)<<endl;


}