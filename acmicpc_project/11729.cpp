#include <iostream>
#include <vector>
using namespace std;

vector<int> list;

void hanoi(int n, int a, int b);

int main()
{
	int k;

	cin >> k;
	hanoi(k, 1, 3);

	cout << list.size() / 2 << '\n';

	for (k = 0; k < list.size(); k += 2) {
		cout << list[k] << ' ' << list[k + 1] << '\n';
	}

	return 0;
}

void hanoi(int n, int a, int b)
{
	if (n <= 1) {
		list.push_back(a);
		list.push_back(b);
	}
	else {
		int c = 6 - a - b;

		hanoi(n - 1, a, c);
		list.push_back(a);
		list.push_back(b);
		hanoi(n - 1, c, b);
	}

	return;
}
