#include <iostream>
using namespace std;

int main() {

	int N, sum, tmp, min = 0;

	cin >> N;

	for(int i = N; i > 0; i-- ){
		sum = tmp = i;

		for (tmp; tmp > 0; tmp /= 10) {
			sum += tmp % 10;
		}

		if (N == sum) min = i;
	}

	if (min) cout << min << '\n';
	else cout << 0 << '\n';

	return 0;
}