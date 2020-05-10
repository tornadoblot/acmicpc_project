#include <iostream>
using namespace std;

int main() {

	int n;

	cin >> n;

	for (int i = 1; i <= n * 2; i++) {
		if (i % 2) {
			for (int j = 1; j <= n; j++) {
				if (j % 2) cout << '*';
				else cout << ' ';
			}
		}
		else {
			

			for (int j = 1; j <= n; j++) {
				if (j % 2) cout << ' ';
				else cout << '*';
			}
		}

		cout << '\n';
	}


	return 0;
}