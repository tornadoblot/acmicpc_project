#include <iostream>
#include <vector>
using namespace std;

// 1       : 1		1
// 2  - 7  : 2		6
// 8  - 19 : 3		12
// 20 - 37 : 4		18
// 38 - 61 : 5		24

int main()
{
	int n, cnt = 0;
	long long n1 = 1, n2;
	cin >> n;

	if (n == 1)
	{
		cout << 1 << '\n';
		return 0;
	}

	for (int i = 0; i <= 1000000000; i++)
	{
		cnt++;
		n2 = n1 + i * 6;
		if (n1 < n && n <= n2) break;
		n1 = n2;

		cout << n1 << '\n';

	}

	cout << cnt << '\n';
	return 0;
}