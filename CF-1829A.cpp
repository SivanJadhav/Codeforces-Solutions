#include <iostream>
using namespace std;

int main() {
    string cf = "codeforces";
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string inp = ""; cin >> inp;
        int diff = 0;
        for (int j = 0; j < 10; j++) {
            if (inp[j] != cf[j]) { diff++; }
        }
        cout << diff << '\n';
    }
}