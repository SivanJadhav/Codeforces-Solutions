/*
 * Problem: 144B Meeting
 * Link: https://codeforces.com/problemset/problem/144/B
 * Difficulty: 9/10 (as per my current level)
 *
 * Solution Approach: Get the radiator locations, calculate the number of
 * generals present, loop through each point on the perimeter, check if it is
 * heated by any radiator (by looping through all the radiators) and if so
 * remove the number of general (actually the variable should've been cold
 * generals but now I fear renaming to mess up).
 *
 * Time/Space Complexity: O(n + radiators(vertical_distance +
 * horizontal_distance)) (worst case)
 */
#include <cmath>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

// Useful typedefs
typedef vector<int> vi;
typedef pair<int, int> pii;

// Useful macros
#define fi first
#define se second

// Fast I/O
#define fast_io                                                                \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);

bool is_warm(pii general, pii radiator, int radius);

int main() {
  fast_io;

  pii corner1;
  pii corner2;
  int n;

  cin >> corner1.fi >> corner1.se >> corner2.fi >> corner2.se;
  cin >> n;

  vector<pair<pair<int, int>, int>> radiators(n);

  for (int i = 0; i < n; i++) {
    int x = 0;
    int y = 0;
    int radius = 0;
    cin >> x >> y >> radius;

    radiators[i].fi.fi = x;
    radiators[i].fi.se = y;
    radiators[i].se = radius;
  }

  int generals = 0;
  generals += 2 * (abs(corner2.se - corner1.se)); // Vertical side
  generals += 2 * (abs(corner2.fi - corner1.fi)); // Horizontal side

  // Vertical sides
  int x = min(corner1.fi, corner2.fi);
  for (int i = 0; i < 2; i++) {
    for (int i = min(corner1.se, corner2.se); i <= max(corner1.se, corner2.se);
         i++) {
      pii general;
      general.fi = x;
      general.se = i;
      for (pair<pii, int> radiator : radiators) {
        if (is_warm(general, radiator.fi, radiator.se) == true) {
          generals--;
          break;
        }
      }
    }
    x = max(corner1.fi, corner2.fi);
  }

  // Horizontal sides
  int y = min(corner1.se, corner2.se);
  for (int i = 0; i < 2; i++) {
    for (int i = min(corner1.fi, corner2.fi) + 1;
         i < max(corner1.fi, corner2.fi); i++) {
      pii general;
      general.fi = i;
      general.se = y;
      for (pair<pii, int> radiator : radiators) {
        if (is_warm(general, radiator.fi, radiator.se) == true) {
          generals--;
          break;
        }
      }
    }
    y = max(corner1.se, corner2.se);
  }

  cout << generals << '\n';

  return 0;
}

bool is_warm(pii general, pii radiator, int radius) {
  double distance = 0;
  distance += pow(abs(general.fi - radiator.fi), 2);
  distance += pow(abs(general.se - radiator.se), 2);
  distance = sqrt(distance);

  if (radius >= distance) {
    return true;
  } else {
    return false;
  }
}
