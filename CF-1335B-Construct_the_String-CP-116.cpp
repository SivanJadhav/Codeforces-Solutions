#include <iostream>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'
, 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    while (t--) {
        string s = "";
        int n, a, b;
        cin >> n >> a >> b;
        b--;

        int len = 0;
        while (len != n) {
            for (int i = 0, l = a, subl = b; l != 0; l--)
            {
                if (len == n) {
                    break;
                }
                if (l == subl)
                {
                    i++;
                    subl--;
                }
                s += letters[i];
                len++;
            }
        }

        cout << s << '\n';
    }
}
