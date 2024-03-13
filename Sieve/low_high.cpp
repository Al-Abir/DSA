#include <bits/stdc++.h>
using namespace std;

vector<int> high;  // Declare the 'high' array globally
vector<int> low;
void Sieve(int n) {
    vector<int> f(n + 1, true);
    high.resize(n + 1, 0);

    for (int i = 2; i * i <= n; i++) {
        if (f[i] == true) {
            for (int j = i * i; j <= n; j += i) {
                f[j] = false;
                high[j] = i;
                 if (low[j] == 0) {
                    low[j] = i;
            }
        }
    }
 }
}

int main(){
    const int N = 100100;
    Sieve(N);
    int num;
    cin >> num;

    vector<int> prime_factor;

    while (num > 1) {
        int primefactor = high[num];
        while (num % primefactor == 0) {
            num /= primefactor;
            prime_factor.push_back(primefactor);
        }
    }

    for (int factor : prime_factor) {
        cout << factor << " ";
    }

    return 0;
}
