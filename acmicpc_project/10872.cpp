#include <iostream>
using namespace std;

int main()
{
	long long tmp = 1;
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
		tmp *= i;

	cout << tmp;
	
	return 0;
}