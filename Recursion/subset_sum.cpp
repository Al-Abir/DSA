#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
private:
    int helper(vector<int>& arr, int sum, int i){
        if(sum == 0){
            return 1; // If sum becomes zero, we found a valid combination
        }
        if(sum < 0 || i == arr.size()){
            return 0; // If sum goes negative or we reach the end of the array, no valid combination
        }
        // Count combinations including the current element + combinations excluding the current element
        return helper(arr, sum - arr[i], i + 1) + helper(arr, sum, i + 1);
    }
    
public:
    int isSubsetSum(vector<int>& arr, int sum){
        return helper(arr, sum, 0);
    }
};

int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
}
