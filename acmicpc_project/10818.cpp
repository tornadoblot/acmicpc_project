#include <iostream>
using namespace std;

int main()
{
	int n, max, min, tmp;
	cin >> n;

	cin >> tmp;
	max = tmp;
	min = tmp;

	for (int i = 1; i < n; i++)
	{
		cin >> tmp;
		if (max < tmp) max = tmp;
		if (min > tmp) min = tmp;
	}

	cout << min << ' ' << max << '\n';


	return 0;
}