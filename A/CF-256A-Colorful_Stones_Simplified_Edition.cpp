#include <iostream>
using namespace std;

int main() {
  string stones;
  string t;
  cin >> stones >> t;

  int right = 0;

  for (int left = 0, len = t.length(); left < len; left++) {
    if (stones[right] == t[left]) {
      right++;
    }
  }

  cout << right + 1 << '\n';
}
