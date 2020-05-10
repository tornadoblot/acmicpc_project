#include <iostream>
using namespace std;

int main() {

	int T, n, i, cnt = 0;
	bool isPrime;
	cin >> T;

	while (T--) {
		cin >> n;

		if (n == 1) continue;

		i = 2;
		isPrime = true;

		while (i < n) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
			++i;
		}

		if (isPrime) cnt++;
	}

	cout << cnt << '\n';

	return 0;
}