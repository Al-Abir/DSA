#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void helper(string s, string temp, int index, vector<string> &ans) {
        if (s.size() == index) {
            ans.push_back(temp);
            return;
        }
        // take
      
        helper(s, temp + s[index], index + 1, ans);
      // not take 
        helper(s, temp, index + 1, ans);

        return;
    }

    vector<string> AllPossibleStrings(string s) {
        vector<string> ans;
        if (!s.empty()) {
            helper(s, "", 0, ans);
        }
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        vector<string> res = ob.AllPossibleStrings(s);
        for (auto i : res) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
