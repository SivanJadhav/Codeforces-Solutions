#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string word;
    cin >> word;
    word[0] = toupper(word[0]);
    cout << word << '\n';
}
