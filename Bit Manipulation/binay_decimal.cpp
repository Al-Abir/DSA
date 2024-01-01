#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n) {
    string binary = "";
    while (n >= 1) {
        int remainder = n % 2;
        n = n / 2;
        binary = to_string(remainder) + binary;
    }
    return binary;
}

int binary_to_decimal(string n) {
    int result = 0;
    int power2 = 1;
    for (int i = n.size() - 1; i >= 0; i--) {
        if (n[i] == '1') {
            result = result + power2;
        }
        power2 = power2 * 2;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;

    string binary = decimal_to_binary(n);

    cout << "Binary representation: " << binary << endl;
    int decimal = binary_to_decimal(binary);
    cout << "Decimal representation: " << decimal << endl;
    return 0;
}
