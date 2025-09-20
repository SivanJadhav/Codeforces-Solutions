#include <iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;

    int y = 0;
    while (a <= b)
    {
        y++;
        a *= 3;
        b *= 2;
    }

    cout << y << '\n';
}
