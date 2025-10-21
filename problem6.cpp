//
// Created by Javohir Toshtemirov on 10/21/25.
//

#include <iostream>

using namespace std;

long double sum(int n) {
    if (n == 0)
        return 0;
    return 1.0 / (n * n) + sum(n - 1);
}


int main() {
    int n;
    cin >> n;
    cout << sum(n);
}