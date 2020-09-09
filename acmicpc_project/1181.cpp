#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	int N, num = -1;
	cin >> N;
	vector<string> str;
	string tmp;

	while (N--)
	{
		cin >> tmp;
		str.push_back(tmp);
		if (num > tmp.size()) num = tmp.size();
	}

	sort(str.begin(), str.end());
	str.erase(unique(str.begin(), str.end()), str.end());

	while (!str.empty())
	{
		for (int i = 0; i < str.size();)
		{
			if (num == str[i].size())
			{
				cout << str[i] << '\n';
				str.erase(str.begin() + i);
			}
			else i++;
		}
		num++;
	}

	return 0;
}