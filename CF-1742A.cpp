#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        cin >> a >> b >> c;

        if (a + b == c || a + c == b || c + b == a) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}