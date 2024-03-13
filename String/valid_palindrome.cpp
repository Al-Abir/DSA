#include <iostream>
#include <cctype>

class Solution {
public:
    bool isPalindrome(std::string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start <= end) {
            if (!isalnum(s[start])) {
                start++;
                continue;
            }
            if (!isalnum(s[end])) {
                end--;
                continue;
            }
            if (tolower(s[start]) != tolower(s[end])) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }
};

int main() {
    Solution solution;

    std::string s = "A man, a plan, a canal: Panama";
    std::cout << std::boolalpha << solution.isPalindrome(s) << std::endl;

    return 0;
}