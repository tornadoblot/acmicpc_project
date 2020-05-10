#include <iostream>
#include <vector>

using namespace std;

int main() {

	int T, f, n;
	int i, j, k, tmp = 0;
	int apart[15][14] ={ 0, };

	for (i = 0; i < 15; i++) {
		apart[i][0] = 1;
	}

	for (i = 0; i < 14; i++) {
		apart[0][i] = i+1;
	}
		
	for (i = 1; i < 15; i++) {
		for (j = 1; j < 14; j++) {

			for (k = 0; k <= j; k++) {
				tmp += apart[i-1][k];
			}

			apart[i][j] = tmp;
			tmp = 0;
		}
	}

	cin >> T;

	while (T--) {
		cin >> f >> n;
		cout << apart[f][n-1] << '\n';
	}

	return 0;
}