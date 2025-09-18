#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int s_a = 0;
  int s_g = 0;

  string sequence = "";

  for (int i = 0; i < n; i++) {
    int a = 0, g = 0;
    cin >> a >> g;

    if (s_a > s_g) {
      s_g += g;
      sequence += 'G';
    } else if (s_g > s_a) {
      s_a += a;
      sequence += 'A';
    } else {
      s_a += a;
      sequence += 'A';
    }
  }

  cout << sequence << '\n';
}
