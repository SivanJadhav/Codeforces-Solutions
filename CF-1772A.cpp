#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int a = 0; int b = 0;
        string sum; cin >> sum;
        a = (int) sum[0] - '0';
        b = (int) sum[2] - '0';
        cout << a + b << '\n';
    }
}