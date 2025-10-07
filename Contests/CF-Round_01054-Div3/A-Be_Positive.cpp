#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int changes = 0;
        int negatives = 0;
        while (n--)
        {
            int ai;
            cin >> ai;

            if (ai == 0)
            {
                changes++;
            }
            if (ai == -1)
            {
                negatives++;
            }
        }

        changes += 2 * (negatives % 2);

        cout << changes << '\n';
    }
}
