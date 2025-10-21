//
// Created by Javohir Toshtemirov on 10/21/25.
//

#include <iostream>

using namespace std;

void rec_fun(int n) {
    cout << n << ' ';

    if (n == 0)
        return;

    rec_fun(n - 1);
}


int main() {
    rec_fun(10);
}