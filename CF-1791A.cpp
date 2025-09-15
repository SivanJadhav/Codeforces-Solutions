#include <bits/stdc++.h>
using namespace std;

unordered_map<char, bool> letters = {
    {'c', true},
    {'o', true},
    {'d', true},
    {'e', true},
    {'f', true},
    {'o', true},
    {'r', true},
    {'c', true},
    {'e', true},
    {'s', true}
};

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        char t = '\0'; cin >> t;
        if (letters[t] == true) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}