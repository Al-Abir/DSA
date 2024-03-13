#include<bits/stdc++.h>
using namespace std;
int counting(int n)
{
    if(n==0){
        return 0;
    }
    //return counting(n/10)+1;
      return counting(n/10)+(n%10);

}

int main(){
    // factorial

   
    int ans = counting(1204567);
    cout<<ans;


  return 0;
}