
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(vector<string> &v, int n, int oc, int cc, string s){
        // base case
        if (oc == n && cc == n) {
            v.push_back(s);
            return;
        }

        if (oc < n) {
            helper(v, n, oc + 1, cc, s + "(");
        }

        if (cc < oc) {
            helper(v, n, oc, cc + 1, s + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
       vector<string> v;
        int oc = 0, cc = 0;
        helper(v, n, oc, cc, "");
        return v;
    }
};

int main() {
    Solution solution;
    int n; 
    cin>>n;
    vector<string> result = solution.generateParenthesis(n);

    cout << "All valid combinations of balanced parentheses for n = " << n << " are:\n";
    for (const auto &str : result) {
        cout << str << "\n";
    }

    return 0;
}
