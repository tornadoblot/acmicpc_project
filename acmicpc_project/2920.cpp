#include <iostream>
using namespace std;

int main()
{
	int n[8];
	bool ascend = true;

	for (int i = 0; i < 8; i++)
		cin >> n[i];

	

	if (n[0] == 1)
	{
		for (int i = 0; i < 8; i++)
		{
			if (i + 1 != n[i]) ascend = false;
		}
		if (ascend) cout << "ascending";
		else cout << "mixed";
	}
	else if (n[0] == 8)
	{
		for (int i = 0; i < 8; i++)
		{
			if (8 - i != n[i]) ascend = false;
		}
		if (ascend) cout << "descending";
		else cout << "mixed";
	}
	else
		cout << "mixed";

	return 0;
}