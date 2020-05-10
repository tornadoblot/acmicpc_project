#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {

	int T, n;
	int i, j, tmp;
	vector <int> prime;
	int a = 10, b = 100;

	for (i = 0; i <= 10000; i++)
		prime.push_back(i);

	prime[1] = 0;

	for (i = 2; i < prime.size(); i++) {
		if (!prime[i]) continue;

		for (j = i * 2; j < prime.size(); j += i)
			prime[j] = 0;
	}

	cin >> T;

	while (T--) {
		cin >> n;

		for (i = 0; i < n; i++) {

			if (!prime[i] || !prime[n - i]) continue;


			a = prime[i];
			b = n - prime[i];

			if (a >= b) break;
		}

		cout << b << ' ' << a << '\n';
	}

	return 0;
}