#include<iostream>
using namespace std;

void reachome(int a , int b)
{
    cout<<"Source "<<a <<" "<<"destination " <<b<<endl;
     
     if(a==b){
        cout<<"Reached"<<endl;
        return;
     }
    //processing
     a++;
    reachome(a,b);

}




int main(){

      int src = 2;
      int dest = 10;

      reachome(src,dest);


    return 0;
}