#include <iostream>
#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (int num : nums) {
            if (!seen.insert(num).second) {
                // Found a duplicate
                return true;
            }
        }

        // No duplicates found
        return false;
    }
};

int main() {
    Solution solution;

    // Example 1: Contains duplicate
    std::vector<int> nums1 = {1, 2, 3, 1};
    std::cout << "Example 1: " << (solution.containsDuplicate(nums1) ? "Contains" : "Does not contain") << " a duplicate." << std::endl;

    // Example 2: No duplicate
    std::vector<int> nums2 = {4, 5, 6, 7};
    std::cout << "Example 2: " << (solution.containsDuplicate(nums2) ? "Contains" : "Does not contain") << " a duplicate." << std::endl;

    return 0;
}
