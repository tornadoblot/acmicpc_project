#include <iostream>
#include <vector>
using namespace std;

int main() {

	int T, x, y;
	vector<int> cnt;
	cin >> T;

	while (T--) {
		cin >> x >> y;

		cnt.push_back(y - x);
		for (x = 1; x < cnt[0];) {
			for (int i = 0; x < cnt[0] && i < 2; i++) {
				cnt[0] -= x;
				cnt.push_back(x);
			}
			x++;
		}

		cout << cnt.size() << '\n';
		cnt.clear();
	}

	return 0;
}