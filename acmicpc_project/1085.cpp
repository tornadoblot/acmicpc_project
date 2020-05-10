#include <iostream>
using namespace std;

int main() {

	int x, y, w, h;
	int min;

	cin >> x >> y >> w >> h;

	min = (w - x < w - (w - x)) ? w - x : w - (w - x);
	min = (min < h - y) ? min : h - y;
	min = (min < h - (h - y)) ? min : h - (h - y);

	cout << min << '\n';

	return 0;
}