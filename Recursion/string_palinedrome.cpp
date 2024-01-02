#include<bits/stdc++.h>
using namespace std;

int reverse_String(std::string &text, int start, int end) {
    if (start >= end)
        return 1;

    if (text[start] != text[end]) {
        return 0;
    }

    swap(text[start], text[end]); // Fix: Swap characters at positions start and end

    reverse_String(text, start + 1, end - 1);
}

int main() {
    string text;
    cin >> text;

    cout<< reverse_String(text, 0, text.length() - 1);
    
    return 0;
}
