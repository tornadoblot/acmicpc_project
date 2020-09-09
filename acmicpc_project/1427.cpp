#include <iostream>
using namespace std;

int main()
{
	string num;

	cin >> num;

	for (int i = 9; i > -1; i--)
	{
		for (auto j : num)
			if (j - '0' == i) cout << i;
	}

	return 0;
}