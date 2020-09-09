#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cardCount(vector<int>& card, int find)
{
	int left = 0, right = card.size(), mid;
	int lower, upper;

	while (left < right)
	{
		mid = (left + right) / 2;

		if (card[mid] < find)
			left = mid + 1;
		else
			right = mid;
	}

	lower = right + 1;

	left = 0;
	right = card.size();

	while (left < right)
	{
		mid = (left + right) / 2;

		if (card[mid] <= find)
		{
			left = mid + 1;
		}
		else
			right = mid;
	}

	upper = right + 1;

	return upper - lower;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> card;
	int n, tmp;

	cin >> n;

	while (n--)
	{
		cin >> tmp;
		card.push_back(tmp);
	}

	sort(card.begin(), card.end());

	cin >> n;

	while (n--)
	{
		cin >> tmp;
		cout << cardCount(card, tmp) << ' ';
	}

	return 0;
}