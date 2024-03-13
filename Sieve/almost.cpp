#include <bits/stdc++.h>
using namespace std;

int countAlmostPrimes(int n) {
    // Create a vector to store the count of prime divisors for each number from 1 to n
    vector<int> primeCount(n + 1, 0);

    // Loop to count prime divisors for each number
    for (int i = 2; i <= n; i++) {
        if (primeCount[i] == 0) {  // i is a prime number
            for (int j = i; j <= n; j += i) {
              
                primeCount[j]++;
            
            }
        }
    }

    // Count almost prime numbers
    int almostPrimeCount = 0;
    for (int i = 1; i <= n; i++) {
        if (primeCount[i] == 2) {
            almostPrimeCount++;
        }
    }

    // Return the count of almost prime numbers
    return almostPrimeCount;
}

int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    int result = countAlmostPrimes(n);

    cout << "Number of almost prime numbers up to " << n << ": " << result << endl;

    return 0;
}