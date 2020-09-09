#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> people;
	int n, k;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		people.push(i);

	cout << '<';

	int tmp;
	while (people.size() > 1)
	{
		for (int i = 1; i < k; i++)
		{
			tmp = people.front();
			people.pop();
			people.push(tmp);
		}

		cout << people.front() << ", ";
		people.pop();
	}

	cout << people.front() << '>';

	return 0;
}