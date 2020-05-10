#include <iostream>
using namespace std;

int main() {

	int m, n, sum = 0;
	bool isPrime = true;
	int i, tmp;

	cin >> m >> n;
	tmp = m;
	for (m; m <= n; m++) {

		if (m == 1) continue;

		isPrime = true;
		i = 2;

		while (i < m) {
			if (m % i == 0) {
				isPrime = false;
				break;
			}
			++i;
		}

		if (isPrime) {
			sum += m;
		}
	}

	if (!sum) {
		cout << -1 << '\n';
		return 0;
	}

	cout << sum << '\n';

	for (m = tmp; m <= n; m++) {

		if (m == 1) continue;

		isPrime = true;
		i = 2;

		while (i < m) {
			if (m % i == 0) {
				isPrime = false;
				break;
			}
			++i;
		}

		if (isPrime) {
			cout << m << '\n';
			return 0;
		}
	}



	return 0;
}