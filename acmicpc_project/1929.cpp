#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

	int n, cnt;
	int i, j;
	vector<int> arr;

	while (true) {
		cin >> n;

		if (n == 0) break;

		cnt = 0;
		arr.clear();

		for (i = 0; i <= n * 2; i++) {
			arr.push_back(i);
		}
		arr[1] = 0;

		for (i = 2; i <= n * 2; i++) {
			if (!arr[i]) continue;

			for (j = i * 2; j <= n * 2; j += i)
				arr[j] = 0;
		}

		for (i = n + 1; i <= n * 2; i++)
			if (arr[i]) cnt++;

		cout << cnt << '\n';
	}


	

	return 0;
}