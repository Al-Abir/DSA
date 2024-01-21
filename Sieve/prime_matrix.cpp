#include<bits/stdc++.h>


using namespace std;

vector<int> primes;

void Sieve(int n) {
    primes.clear();  // Clear the primes vector before generating
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }
}

int main() {
    Sieve(100100);

    int n, m;
    cin >> n >> m;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  // Use m as column limit here
            cin >> a[i][j];
        }
    }

    int answer = INT_MAX;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < m; j++) {
            int nearest_prime = *lower_bound(primes.begin(), primes.end(), a[i][j]);
            count += nearest_prime - a[i][j];
        }
        answer = min(answer, count);
    }

    for (int j = 0; j < m; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            int nearest_prime = *lower_bound(primes.begin(), primes.end(), a[i][j]);
            count += nearest_prime - a[i][j];
        }
        answer = min(answer, count);
    }

    cout << answer << endl;

    return 0;
}
