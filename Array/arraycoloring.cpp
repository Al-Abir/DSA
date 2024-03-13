#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int sum = 0;
    int sum2 = 0;

    for (int j = 0; j < n; j++) {
        if (arr[j] % 2 == 0) {
            sum += arr[j];
        } else {
            sum2 += arr[j];
        }
    }

    if (sum % 2 == 0 && sum2 % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        solve(arr, n);
    }

    return 0;
}
