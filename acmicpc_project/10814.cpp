#include <iostream>
#include <vector>
#include <array>
#include <utility>
using namespace std;

int main()
{
	vector <pair<int, string> > member;
	array<int, 201> cumul = { 0, };
	int N, old;
	string name;
	
	cin >> N;

	while (N--)
	{
		cin >> old >> name;
		member.push_back(make_pair(old, name));
		cumul[old]++;
	}

	for (int i = 0; i < cumul.size(); i++)
	{
		if (cumul[i] > 0)
		{
			for (auto j = member.begin(); cumul[i]; j++)
			{
				if (j->first == i) {
					cout << j->first << ' ' << j->second << '\n';
					cumul[i]--;
				}
			}
		}
	}

	return 0;
}