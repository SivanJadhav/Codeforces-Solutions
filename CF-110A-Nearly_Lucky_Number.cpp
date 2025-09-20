#include <iostream>
#include <string>

using namespace std;

int main()
{
  long long n;
  int luckys = 0;
  cin >> n;

  string number = to_string(n);

  for (int i = 0, length = number.length(); i < length; i++)
  {
    if (number[i] == '4' || number[i] == '7')
    {
        luckys++;
    }
  }

  if (luckys == 4 || luckys == 7)
  {
    cout << "YES" << endl;
  }

  else
  {
    cout << "NO" << endl;
  }
}