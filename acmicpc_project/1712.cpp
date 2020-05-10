#include <iostream>

using namespace std;

int main() {

	long long a, b, c;
	int i = 1;

	cin >> a >> b >> c;

	if (c - b <= 0) cout << -1;
	else cout << (a / (c - b)) + 1;

	return 0;
}
