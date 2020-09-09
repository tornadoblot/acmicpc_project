#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count[10001] = { 0, };
	int n, tmp, max = 0;

	cin >> n;

	while (n--)
	{
		cin >> tmp;
		count[tmp]++;
		if (max < tmp) max = tmp;
	}

	for (int i = 0; i <= max; i++)
	{
		while (count[i]--)
			cout << i << '\n';
	}
	
}