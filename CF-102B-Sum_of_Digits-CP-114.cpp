#include <iostream>
using namespace std;

int main() {
  string number = "";

  cin >> number;

  int spells = 0;

  while (number.length() != 1) {
    spells++;
    int len = number.length();
    long long sum = 0;
    for (int i = 0; i < len; i++) {
      sum += number[i] - '0';
    }
    number = to_string(sum);
  }

  cout << spells << '\n';
}
