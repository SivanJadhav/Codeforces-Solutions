#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
	string word;
	int lowercase = 0;
	int uppercase = 0;

	cin >> word;

	int length = word.length();

	// Checking the amount of lowercase and uppercase letters
	for (int i = 0; i < length; i++)
	{
		if (isupper(word[i]))
		{
			uppercase++;
		}
		else
		{
			lowercase++;
		}
	}

	// Manipulating the string based on the number of uppercase and lowercase letters

	for (int j = 0; j < length; j++)
	{
		if (uppercase > lowercase)
		{
			word[j] = toupper(word[j]);
		}

		else
		{
			word[j] = tolower(word[j]);
		}
	}

	// Returning the manipulated word
	cout << word << endl;
}
