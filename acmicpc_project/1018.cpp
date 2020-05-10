#include <iostream>
using namespace std;

bool arr[50][50] = { 0, };

int count(int x, int y);

int main() {

	int N, M, min;
	char tmp;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> tmp;
			if (tmp == 'B') arr[i][j] = true;
		}
	}

	min = count(0, 0);

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			tmp = count(i, j);
			if (min > tmp) min = tmp;
		}
	}

	cout << min << '\n';

	return 0;
}

int count(int x, int y)
{
	bool first = true;
	int cntW = 0, cntB = 0;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j += 2) {
			if (arr[i][j] != first) cntW++;
		}

		for (int j = y + 1; j < y + 8; j += 2) {
			if (arr[i][j] == first) cntW++;
		}

		first = !first;
	}

	first = false;

	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j += 2) {
			if (arr[i][j] != first) cntB++;
		}

		for (int j = y + 1; j < y + 8; j += 2) {
			if (arr[i][j] == first) cntB++;
		}

		first = !first;
	}

	return cntW < cntB ? cntW : cntB;
}
