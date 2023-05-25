#include <iostream>

using namespace std;

int main() {

	int n, cnt = 0, up, down, i, j;

	cin >> n;

	for (i = 2; cnt != n; i++) {
		for (j = 1; j < i; j++) {
			if (++cnt == n) {
				up = i;
				break;
			}
		}
	}

	if (i % 2) cout << i - j - 1<< '/' << i - (i - j);
	else cout << i - (i - j) << '/' << i - j - 1;

	return 0;
}