#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        int card;
        cin >> card;
        cards[i] = card;
    }

    int s = 0, d = 0;
    for (int i = 0, l = 0, r = n - 1; n != 0; i++, n--)
    {
        if (cards[r] >= cards[l])
        {
            if (i % 2 == 0)
            {
                s += cards[r];
            } else {
                d += cards[r];
            }
            r--;
        } else {
            if (i % 2 == 0)
            {
                s += cards[l];
            } else {
                d += cards[l];
            }
            l++;
        }
    }

    cout << s << " " << d << '\n';
}
