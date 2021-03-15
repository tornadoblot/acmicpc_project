#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class elem {
public:
	int x, y, cnt;

	elem(int i, int j, int n) : x(i), y(j), cnt(n) {};
};


int main()
{
	ios_base::sync_with_stdio(0);
	vector<string> map;
	vector<bool> visted[101];

	int n, m;
	string tmp;
	int ans = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			visted[i].push_back(false);

	int i = 0;
	while (i++ < n)
	{
		cin >> tmp;
		map.push_back(tmp);
	}

	queue<elem> que;
	que.push(elem(0, 0, 1));
	visted[0][0] = true;

	while (!que.empty())
	{
		elem tmp = que.front();
		int x = tmp.x, y = tmp.y;
		que.pop();

		if (x == n - 1 && y == m - 1)
		{
			ans = tmp.cnt;
			break;
		}

		if (0 <= x - 1 && map[x - 1][y] == '1' && !visted[x - 1][y])
		{
			visted[x - 1][y] = true;
			que.push(elem(x - 1, y, tmp.cnt + 1));
		}

		if (0 <= y - 1 && map[x][y - 1] == '1' && !visted[x][y - 1])
		{
			visted[x][y - 1] = true;
			que.push(elem(x, y - 1, tmp.cnt + 1));
		}

		if (y + 1 < m && map[x][y + 1] == '1' && !visted[x][y + 1])
		{
			visted[x][y + 1] = true;
			que.push(elem(x, y + 1, tmp.cnt + 1));
		}

		if (x + 1 < n && map[x + 1][y] == '1' && !visted[x + 1][y])
		{
			visted[x + 1][y] = true;
			que.push(elem(x + 1, y, tmp.cnt + 1));
		}
	}

	cout << ans;

	return 0;
}