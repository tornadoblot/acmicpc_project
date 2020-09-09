#include <iostream>
using namespace std;

int arr[500001], N;

int nextCard(int flag)
{
	for (++flag; !arr[flag]; flag++)
		if (flag > N) flag %= N;

	return flag;
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	cin >> N;

	if (N == 1)
	{
		cout << 1 << '\n';
		return 0;
	}

	for (int i = 1; i <= N; i++)
		arr[i] = 1;

	int flag = 0, cnt = 0;

	while (cnt < N - 1)
	{
		flag = nextCard(flag);
		arr[flag] = 0;
		cnt++;

		flag = nextCard(flag);
	}

	cout << flag << '\n';

	return 0;
}