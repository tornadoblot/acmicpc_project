#include <iostream>
using namespace std;
int fact[11] = { 1, };

void factorial(int n)
{
	for (int i = 1; i <= n; i++)
		fact[i] = fact[i - 1] * i;
}

int main()
{
	int n, k;

	cin >> n >> k;
	factorial(n > k ? n: k);

	cout << fact[n] / (fact[k] * fact[n - k]);

	return 0;
}