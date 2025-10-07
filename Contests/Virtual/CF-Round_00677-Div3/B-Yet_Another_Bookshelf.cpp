/*
 * Problem: [Contest + Problem Name]
 * Link: [Direct problem link]
 * Difficulty: [Your assessment]
 * 
 * Solution Approach: [Brief explanation]
 * Time/Space Complexity: [Analysis]
 */
#include <iostream>
#include <vector>
#include <utility>
#include <unordered_map>
#include <unordered_set>
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
#define umap unordered_map
#define uset unordered_set

// Fast I/O
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int first_one = -1, last_one = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (first_one == -1) first_one = i;
                last_one = i;
            }
        }

        int zeros_between = 0;
        for (int i = first_one; i <= last_one; i++) {
            if (a[i] == 0) zeros_between++;
        }

        cout << zeros_between << '\n';
    }
    
    return 0;
}
