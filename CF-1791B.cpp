/*
 * Problem: [Contest + Problem Name]
 * Link: [Direct problem link]
 * Difficulty: [Your assessment]
 * 
 * Solution Approach: [Brief explanation]
 * Time/Space Complexity: [Analysis]
 */
#include <bits/stdc++.h>
using namespace std;

// Useful typedefs
typedef pair<int, int> pii;

// Useful macros
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i < b; i++)

// Fast I/O
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;
    
    int t; cin >> t;
    while (t--) {
        pii loc; loc.fi = 0; loc.se = 0;
        int n = 0; cin >> n;
        string di;
        cin >> di;
        bool went = false;

        rep (i, 0, n) {
            if (di[i] == 'U') { loc.se++; }
            else if (di[i] == 'D') { loc.se--; }
            else if (di[i] == 'R') { loc.fi++; }
            else if (di[i] == 'L') { loc.fi--; }
            
            if (loc.fi == 1 && loc.se == 1) { went = true; };
        }
        if (went == true) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}