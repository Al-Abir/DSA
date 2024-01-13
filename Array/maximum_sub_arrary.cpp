#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0];
        int sum = 0;
        int start = 0, end = 0; // Variables to keep track of the current subarray

        for (int i = 0; i < nums.size(); i++) {
            sum = sum + nums[i];

            if (sum > ans) {
                ans = sum;
                end = i; // Update the end index of the subarray
            }

            if (sum < 0) {
                sum = 0;
                start = i + 1; // Update the start index of the subarray
            }
        }

        // Print the maximum subarray
        cout << "Maximum Subarray: ";
        for (int i = start; i <= end; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int result = solution.maxSubArray(nums);

    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
