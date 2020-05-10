#include <iostream>
using namespace std;

char map[3000][3000];

void star(int n, int x, int y);

int main() {
	int n, i, j;
	cin >> n;

	for (i = 0; i < 3000; ++i) {
		for (j = 0; j < 3000; ++j) {
			map[i][j] = ' ';
		}
	}

	star(n, 0, 0);

	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			cout << map[i][j];
		}

		cout << '\n';
	}

	return 0;
}

void star(int n, int x, int y) {
	if (n == 1) {
		map[x][y] = '*';
		return;
	}

	int div = n / 3;

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (i == 1 && j == 1) {
				continue;
			}

			star(div, x + (div * i), y + (div * j));
		}
	}
	return;
}