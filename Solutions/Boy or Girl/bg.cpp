#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	int distinctChars = 0;
	bool distinct;

	cin >> username;

	for (int i = 0, length = username.length(); i < length; i++)
	{
		distinct = true;
		for (int j = i + 1; j < length; j++)
		{
			if (username[i] == username[j])
			{
				 distinct = false;
			}
		}
		if (distinct == true)
		{
			distinctChars += 1;
		}
	}

	if (distinctChars % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	}
	else
	{
		cout << "IGNORE HIM!" << endl;
	}
}
