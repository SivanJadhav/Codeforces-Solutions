#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int matrix[5][5];
    int x_one = 0;
    int y_one = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                x_one = i;
                y_one = j;
            }
        }
    }
    
    int minimum_moves = abs(abs(2 - x_one) + abs(2 - y_one));
    cout << minimum_moves << '\n';
    
}