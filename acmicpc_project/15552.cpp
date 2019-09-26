#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int T, a, b;
	cin >> T;
	while (T--)
	{
		cin >> a >> b;
		cout << (a + b);
	}

	return 0;
}