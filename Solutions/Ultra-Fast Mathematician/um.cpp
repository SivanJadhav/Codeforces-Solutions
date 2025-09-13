#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string number1, number2, answer;
    cin >> number1 >> number2;

    for (int i = 0, l = number1.length(); i < l; i++)
    {
        int n1 = number1[i] - '0';
        int n2 = number2[i] - '0';
        answer.push_back((n1 ^ n2) + '0');
    }

    cout << answer << '\n';
}
