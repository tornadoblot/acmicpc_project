#include <iostream>

using namespace std;
int main()
{
	int tmp, j;
	int arr[5];
	bool isPer = true;

	cin >> tmp;

	while (tmp)
	{
		isPer = true;

		for (j = 0; tmp > 0; tmp /= 10) arr[j++] = tmp % 10;

		--j;

		for (int i = 0; i < j;)
		{
			if (arr[j--] != arr[i++])
			{
				isPer = false;
				break;
			}
		}

		if (isPer) cout << "yes\n";
		else cout << "no\n";

		cin >> tmp;
	}

	return 0;
}