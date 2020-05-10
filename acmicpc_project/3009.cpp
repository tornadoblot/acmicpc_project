#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int x1, x2, x3;
	int y1, y2, y3;

	cin >> x1;
	cin >> y1;
	
	cin >> x2;
	cin >> y2;

	cin >> x3;
	cin >> y3;

	if (x1 == x2)
		cout << x3 << ' ';
	else if (x1 == x3)
		cout << x2 << ' ';
	else if (x2 == x3)
		cout << x1 << ' ';

	if (y1 == y2)
		cout << y3 << '\n';
	else if (y1 == y3)
		cout << y2 << '\n';
	else if (y2 == y3)
		cout << y1 << '\n';

	return 0;
}