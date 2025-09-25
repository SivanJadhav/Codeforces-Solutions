#include <iostream>
using namespace std;

int main() {
    int lens[] = {1, 2, 3, 4, 5};
    int steps = 0;

    int n = 0;
    cin >> n;

    int i = 4;
    while (n >= 0 && i >= 0) {
        if (n < lens[i]) { i--; }
        steps += n / lens[i];
        n -= (n / lens[i]) * lens[i];
    }

    cout << steps << '\n';
}