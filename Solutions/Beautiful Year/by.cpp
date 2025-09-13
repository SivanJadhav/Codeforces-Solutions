#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> digits(int number);

int main(void)
{
    int year;
    cin >> year;
    year++;

    while (1)
    {
        vector<int> year_digits = digits(year);
        sort(year_digits.begin(), year_digits.end(), greater<int>());
        bool fine_to_use;
        for (int i = 0, l = year_digits.size(); i + 1 < l; i++)
        {
            fine_to_use = true;
            if (year_digits[i] == year_digits[i + 1])
            {
                year++;
                fine_to_use = false;
                break;
            }
        }
        if (fine_to_use == true)
        {
            break;
        }
    }
    cout << year << '\n';
}

vector<int> digits(int number)
{
    vector<int> output;
    for (int i = 10; number > (i / 10); i *= 10)
    {
        output.insert(output.begin(), (number % i) / (i / 10));
    }

    return output;
}
