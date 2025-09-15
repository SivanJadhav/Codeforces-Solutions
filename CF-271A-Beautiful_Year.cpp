/*
 * Problem: Beautiful Year - CodeForces
 * Link: https://codeforces.com/problemset/problem/271/A
 * Difficulty: 1/10
 *
 * Solution Approach: Brute force.
 * Time/Space Complexity: O(n - input) till we find the solution n.
 */
#include <iostream>
#include <string>
using namespace std;

// Fast I/O
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

int main() {
  fast_io;

  int year = 0;
  cin >> year;
  int ans = year + 1;
  string snum = to_string(ans);
  while (true) {
    if (snum[0] != snum[1] && snum[0] != snum[2] && snum[0] != snum[3] &&
        snum[1] != snum[2] && snum[1] != snum[3] && snum[2] != snum[3]) {
      cout << snum << '\n';
      return 0;
    } else {
      ans++;
      snum = to_string(ans);
    }
  }

  return 0;
}
