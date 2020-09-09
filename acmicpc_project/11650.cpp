#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	vector<pair<long, long> > coord;

	cin >> n;

	while(n--)
	{
		cin >> x >> y;
		coord.push_back(make_pair(x, y));
	}

	sort(coord.begin(), coord.end());

	for (auto i : coord)
		cout << i.first << ' ' << i.second << '\n';

	return 0;
}