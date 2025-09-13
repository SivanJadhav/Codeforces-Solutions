#include <vector>
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> blocks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> blocks[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (blocks[i] < blocks[j])
            {
                int extra = blocks[j] - blocks[i];
                blocks[j] -= extra;
                blocks[i] += extra;
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << blocks[i];
        if (i != n - 1)
        {
            cout << ' ';
        }
    }
    cout << '\n';
}
