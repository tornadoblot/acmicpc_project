#include <iostream>

using namespace std;

int main() {

	int n, res = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;

		res += n * n;
	}

	cout << res % 10 << '\n';

	return 0;
}