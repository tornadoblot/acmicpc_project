#include <iostream>
#include <math.h>

using namespace std;


int main() {
	int n;
	cin >> n;
	while (n--) {
		double x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double dx = x1 - x2;
		double dy = y1 - y2;

		double add = r1 + r2;
		add = add * add;
		double sub = abs(r1 - r2);
		sub = sub * sub;
		double d = dx * dx + dy * dy;

		if (d < add && d > sub) {
			cout << "2";
		}
		else if (d == add || (d == sub && d != 0)) {
			cout << "1";
		}
		else if (d < sub || d > add) {
			cout << "0";
		}
		else if (d == 0) {
			if (r1 == r2)
				cout << "-1";
			else
				cout << "0";
		}
		cout << '\n';
	}
	return 0;

}
