#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int tmp = 0;

	if (n > m)
	{
		tmp = n;
		n = m;
		m = tmp;
	}

	int i = 1;
	tmp = i;

	while (i <= n)
	{
		if (!(n % i) && !(m % i))
			tmp = i;
		i++;
	}

	cout << tmp << '\n';

	for (tmp = n;; tmp += n)
	{
		if (!(tmp % m))
			break;
	}

	cout << tmp << '\n';

	return 0;
}