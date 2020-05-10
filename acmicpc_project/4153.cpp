#include <iostream>
using namespace std;

void swap(int& a, int& b);

int main() {

	int a, b, c;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) break;

		if (a > b) swap(a, b);
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);

		if (a * a + b * b == c * c) cout << "right\n";
		else cout << "wrong\n";
	}

	return 0;
}

void swap(int& a, int& b) {
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}