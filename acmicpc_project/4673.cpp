#include <iostream>
using namespace std;

int arr[10001];

int d(int d)
{
	int sum = d, tmp = d;
	
	for (; tmp > 0;tmp /= 10)
	{
		sum += tmp % 10;
	}

	return sum;
}

int main()
{
	for (int i = 1; i <= 10000; i++)
	{
		arr[d(i)] = 1;
		if (!arr[i]) cout << i << '\n';
	}

	return 0;
}