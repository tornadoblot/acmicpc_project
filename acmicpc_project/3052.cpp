#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n[10], tmp, cnt = 1;

	for (int i = 0; i < 10; i++)
	{
		cin >> tmp;
		n[i] = tmp % 42;
	}

	sort(n, n + 10);

	for (int i = 1; i < 10; i++)
	{
		if (n[i - 1] != n[i]) cnt++;
	}

	cout << cnt << '\n';

	return 0;
}