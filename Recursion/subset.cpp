#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }
         int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
        output.pop_back();
        // Exclude the current element
        solve(nums, output, index + 1, ans);

        // Include the current element
        
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    Solution ob;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);

        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        vector<vector<int>> res = ob.subsets(nums);

        // Print the subsets
        for (auto subset : res) {
            for (int element : subset) {
                cout << element << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
