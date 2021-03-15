#include <iostream>
using namespace std;

int main()
{
	int t;

	cin >> t;
	while (t--)
	{
		int a, b;
		char tmp;
		cin >> a >> tmp >> b;
		cout << a + b << '\n';
	}

	return 0;
}