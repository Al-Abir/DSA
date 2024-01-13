#include<bits/stdc++.h>
using namespace std;
bool isAnagram(const std::string& s, const std::string& t) {
    string sortedS = s, sortedT = t;
    sort(sortedS.begin(), sortedS.end());
    sort(sortedT.begin(), sortedT.end());
    return sortedS == sortedT;
}

int main() {
     cout <<boolalpha;  // Print bool values as true/false

    // Test cases
    cout << "Listen and Silent: " << isAnagram("listen", "silent") << std::endl;
    cout << "Hello and World: " << isAnagram("hello", "world") << std::endl;

    // Add more test cases as needed

    return 0;
}
