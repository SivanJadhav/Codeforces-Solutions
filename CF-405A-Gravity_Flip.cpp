#include <vector>
#include <algorithm>
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

    sort(blocks.begin(), blocks.end(), [](int a, int b){ return a < b; });

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
