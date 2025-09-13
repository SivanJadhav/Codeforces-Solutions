#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        // If the last digit is zero
        if (n % 10 == 0)
        {
            n /= 10;
        }

        // If the last digit is non-zero
        else
        {
            n--;
        }
    }

    cout << n << endl;
}
