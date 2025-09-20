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
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// Useful macros
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)

// Fast I/O
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


int main() {
    fast_io;
    
    int t = 0; cin >> t;

    while (t--) {
        int n = 0; cin >> n;
        unordered_map<int, int> mp;
        bool can = true;
        rep(i, 0, n) {
            int tmp = 0; cin >> tmp;
            if (mp[tmp] >= 1) { can = false; break; }
            else { mp[tmp]++; }
        }
        if (can == true) { cout << "YES" << '\n'; }
        else { cout << "NO" << '\n'; }
        mp.clear();
    }
    
    return 0;
}