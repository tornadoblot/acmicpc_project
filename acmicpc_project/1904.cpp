#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	unsigned long long sum, a, b;
	a = 1; b = 1;
	sum = a;

	for (int i = 1; i < n; i++)
	{
		sum = (a + b) % 15746;
		b = a;
		a = sum;
	}

	cout << sum;

	return 0;
}