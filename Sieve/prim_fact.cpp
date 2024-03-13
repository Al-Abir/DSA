#include <iostream>
#include <vector>
using namespace std;

vector<int> factor(int n) {
    vector<int> f;
    for (int x = 2; x * x <= n; x++) {
        while (n % x == 0) {
            f.push_back(x);
            n /= x;
        }
    }

    if (n > 1) 
        f.push_back(n);
    
    return f;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> factors = factor(n);

    cout << "Prime factors of " << n << " are: ";
    for (int i : factors) {
        cout << i << " ";
    }

    return 0;
}
