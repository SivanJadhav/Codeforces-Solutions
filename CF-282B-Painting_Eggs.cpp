#include <iostream>
using namespace std;

int main() {
  int n = 0;
  cin >> n;

  int total = 0;
  for (int i = 0; i < n; i++) {
    int a = 0, g = 0;
    cin >> a >> g;

    if (total + a <= 500) {
      cout << "A";
      total += a;
    } else {
      total -= g;
      cout << "G";
    }
  }

  cout << '\n';
}
