#include <iostream>
using namespace std;

int fi[41] = { 1, 1, };

int fibonacci(int n)
{
	if (n <= 1) return fi[n];
	else
	{
		if (fi[n] > 0) return fi[n];
	}

	return fi[n] = fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		if (n == 0) cout << "1 0\n";
		else if (n == 1) cout << "0 1\n";
		else
		{
			fibonacci(n);
			cout << fi[n - 2] << ' ' << fi[n-1] << '\n';
		}
	}


	return 0;
}