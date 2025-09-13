#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    vector<char> sum;
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if (ch != '+')
        {
            sum.push_back(ch);
        }
    }
    sort(sum.begin(), sum.end());
    string output;

    for (int i = 0, size = sum.size(); i < size; i++)
    {
        output.push_back(sum.at(i));
        if (i != sum.size() - 1)
        {
            output.push_back('+');
        }
    }

    cout << output << '\n';
}
