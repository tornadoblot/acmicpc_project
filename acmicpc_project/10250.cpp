#include <iostream>
using namespace std;

int main() {

	int T, h, w, n;
	int f, num;

	cin >> T;

	while (T--) {
		cin >> h >> w >> n;

		for (f = 1; n - h * (f - 1) > h; f++);
		
		num = n - h * (f - 1);
		if (f < 10) cout << num << '0' << f << '\n';
		else cout << num << f << '\n';
	}

	return 0;
}