#include <iostream>
using namespace std;

int main()
{
	int N, X, n;

	cin >> N >> X;
	while (N--)
	{
		cin >> n;
		if (n < X) cout << n << ' ';
	}

	return 0;
}