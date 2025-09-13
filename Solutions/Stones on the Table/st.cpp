#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void)
{
    int no_of_stones;
    cin >> no_of_stones;
    cin.ignore();
    
    string stones;
    char ch;
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        stones.push_back(ch);
    }
    
    int removals = 0;
    for (int i = 0, size = stones.size(); i < stones.size(); i++)
    {
        if (i != size)
        {
            if (stones[i] == stones[i + 1])
            {
                removals++;
            }
        }
    }
    
    cout << removals << '\n';
}