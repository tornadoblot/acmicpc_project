#include <iostream>
using namespace std;

int main()
{
	int n;
	long long add = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		add += i;

	cout << add;

	return 0;
}