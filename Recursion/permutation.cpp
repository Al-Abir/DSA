#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    void solve(std::vector<int> arr, std::vector<std::vector<int>>& ans, int fi) {
        // base condition
        if (fi >= arr.size()) {
            ans.push_back(arr);
            return;
        }
        for (int i = fi; i < arr.size(); i++) {
            std::swap(arr[i], arr[fi]);
            solve(arr, ans, fi + 1);
            std::swap(arr[i], arr[fi]);
        }
    }

public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        solve(nums, ans, 0);
        return ans;
    }
};

int main() {
    Solution solution;

    // User input
   cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;

    cout << "Enter the elements of the array separated by spaces:\n";
     vector<int> nums(n);
     cout<< "Input: [";
    for (int i = 0; i < n; ++i) {
       cin >> nums[i];   
    }
    cout << "]\n";


    // Call the permute function
    vector<vector<int>> result = solution.permute(nums);

    // // Print the result
    // cout << "Input: [";
    // for (int i = 0; i < n; ++i) {
    //     cout << nums[i];
    //     if (i < n - 1) {
    //         std::cout << ",";
    //     }
    // }
    // std::cout << "]\n";

    std::cout << "Output: [";
    for (int  i = 0; i < result.size(); ++i) {
        cout << "[";
        for (size_t j = 0; j < result[i].size(); ++j) {
              cout << result[i][j];
            if (j < result[i].size() - 1) {
                std::cout << ",";
            }
        }
         cout << "]";
        if (i < result.size() - 1) {
            std::cout << ",";
        }
    }
      cout<< "]\n";

    return 0;
}
