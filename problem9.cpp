//
// Created by Javohir Toshtemirov on 10/21/25.
//

#include <iostream>

using namespace std;

int product(int a, int b) {
    if (b == 0)
        return 0;
    return a + product(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a >= 0 and b >= 0)
        cout << product(a, b);
    else if (a < 0 and b >= 0)
        cout << -product(-a, b);
    else if (a >= 0 and b < 0)
        cout << -product(a, -b);
    else
        cout << product(-a, -b);
}