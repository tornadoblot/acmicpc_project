#include <iostream>
using namespace std;

int main()
{
	int n, ten, one, tmp, cnt = 0;
	cin >> n;

	if (n < 10) n = n * 10 + n;
	tmp = n;
	while (true)
	{
		cnt++;
		ten = (tmp % 10) * 10;
		one = tmp % 10 + tmp / 10;
		if (one > 9) one %= 10;

		tmp = ten + one;
		if (n == tmp) break;
	}

	cout << cnt << '\n';

	return 0;
}