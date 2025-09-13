// - There are two strings.
// - They are of same length.
// - There are uppercase and lowercase Latin (english) letters
// - Compare lexographically (case does not matter)
#include <iostream>
using namespace std;

int main()
{
    char word1[102];
    char word2[102];

    cin >> word1 >> word2;

    for (int i = 0; word1[i] != '\0'; i++)
    {
        char w1 = tolower(word1[i]);
        char w2 = tolower(word2[i]);

        if (w1 == w2) {}
        else if (w1 > w2)
        {
            printf("1\n");
            return 0;
        }
        else
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
