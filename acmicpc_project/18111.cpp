#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, b, tmp;
	int min = 501, max = -1;
	vector<vector <int> > ground;
	vector<int> gtmp;

	cin >> n >> m >> b;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			gtmp.push_back(tmp);
			if (min > tmp) min = tmp;
			if (max < tmp) max = tmp;
		}
		ground.push_back(gtmp);
		gtmp.clear();
	}

	if (max > 256) max = 256;

	int btmp, sec;
	int outi, outs = INT32_MAX;
	for (int i = min; i <= max; i++)
	{
		btmp = 0;
		sec = 0;
		for (auto j : ground)
		{
			for (int k = 0; k < j.size(); k++)
			{
				if (j[k] > i)
				{
					sec += (j[k] - i) * 2;
					btmp += j[k] - i;
				}
				else if (j[k] < i)
				{
					sec += i - j[k];
					btmp -= i - j[k];
				}
			}
		}

		if (btmp + b < 0) continue;

		if (outs >= sec)
		{
			outs = sec;
			outi = i;
		}
	}

	cout << outs << ' ' << outi;


	return 0;
}