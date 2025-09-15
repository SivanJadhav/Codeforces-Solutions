/*
 * Problem: Taxi - Codeforces
 * Link: https://codeforces.com/problemset/problem/158/B
 * Difficulty: 1/10
 *
 * Solution Approach: Math.
 * Time/Space Complexity: O(n) where n are the number of groups.
 */
#include <cmath>
#include <iostream>
#include <unordered_map>
using namespace std;

// Fast I/O
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

int main() {
  fast_io;

  unordered_map<int, int> groups;
  int n;
  cin >> n;
  
  while (n--) {
      int children = 0;
      cin >> children;
      groups[children]++;
  }
  
  if (g > roups[3])

  return 0;
}
