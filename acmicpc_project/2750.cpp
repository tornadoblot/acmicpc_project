#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> list;

	int n, tmp;

	cin >> n;

	while (n--)
	{
		cin >> tmp;
		list.push_back(tmp);
	}

	sort(list.begin(), list.end());
	list.erase(unique(list.begin(), list.end()), list.end());

	for (auto i = list.begin(); i != list.end(); i++)
		cout << *i << '\n';
	

	return 0;
}