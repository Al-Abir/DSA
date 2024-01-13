#include<bits/stdc++.h>
using namespace std;

int helper(int indx, int k, int weight[], int value[], int n){
    if(indx == n){
        return 0;
    }
    
    if(k >= weight[indx]){
        return max(helper(indx+1, k, weight, value, n), helper(indx+1, k-weight[indx], weight, value, n) + value[indx]);
    } else {
        return helper(indx+1, k, weight, value, n);
    }
}

int main(){
    int n, k;
    cin >> n >> k;

    int value[n], weight[n];
    for(int i = 0; i < n; i++){
        cin >> weight[i] >> value[i];
    }

    cout << helper(0, k, weight, value, n);

    return 0;
}
