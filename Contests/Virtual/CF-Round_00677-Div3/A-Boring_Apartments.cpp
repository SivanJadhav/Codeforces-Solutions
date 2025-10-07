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

    int prefix_sum_of_presses[4] = {1, 3, 6, 10};

    while (t--)
    {
        int key_presses = 0;
        int x;
        cin >> x;

        string x_str = to_string(x);
        key_presses += prefix_sum_of_presses[x_str.length() - 1] + (((int) (x_str[0] - '0')) - 1) * 10;

        cout << key_presses << '\n';
    }
    
    return 0;
}
