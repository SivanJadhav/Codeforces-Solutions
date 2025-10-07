#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int ai; cin >> ai;
            a[i] = ai;
        }

        sort(a.begin(), a.end());

        int max_diff = 0;
        for (int i = 0; i < n; i += 2)
        {
            if (max_diff < (a[i + 1] - a[i])) {
                max_diff = (a[i + 1] - a[i]);
            }
        }

        cout << max_diff << '\n';
    }
}
