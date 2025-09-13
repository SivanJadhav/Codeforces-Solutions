#include <iostream>

using namespace std;

int main()
{
	int first_cost, money, bananas, total_cost;

	cin >> first_cost >> money >> bananas;

	// Calculating the total amount of money required
	total_cost = first_cost*((bananas*(bananas+1))/2);

	// Calculating the amount of money to be borrowed and printing it
	if (total_cost >= money)
	{
		cout << (total_cost - money) << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
