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

// Debug macro (remove for submission)
#ifdef LOCAL
#define debug(x) cout << #x << " = " << x << endl;
#else
#define debug(...)
#endif

int main() {
    fast_io;
    
    int t; cin >> t;
    while (t--) {
        int k = 0; cin >> k;
        int x = 0; cin >> x;
        int ans = 0;

        ans = x * (pow(2, k));
        cout << ans << '\n';
    }
    
    return 0;
}
