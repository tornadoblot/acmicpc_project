#include <iostream>
#include <vector>;
using namespace std;

class Vegetable
{
public:

	Vegetable(int n, int m)
	{
		this->n = n;
		this->m = m;
	}
	
	void insertEdge(int y, int x)
	{
		arr[x][y] = 1;
	}

	int cnt()
	{
		for(int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j])
				{
					worm++;
					dfs(i, j);
				}
			}

		return worm;
	}

	void dfs(int x, int y)
	{
		arr[x][y] = 0;

		if (x - 1 >= 0 && arr[x - 1][y]) dfs(x - 1, y);
		if (y - 1 >= 0 && arr[x][y - 1]) dfs(x, y - 1);
		if (arr[x + 1][y]) dfs(x + 1, y);
		if (arr[x][y + 1]) dfs(x, y + 1);

		return;
	}


private:

	int arr[51][51] = { 0, };
	int m, n, worm = 0;
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;

	cin >> t;

	while (t--)
	{
		int n, m, k;
		cin >> m >> n >> k;
		Vegetable vg(n, m);

		int s, e;
		while (k--)
		{
			cin >> s >> e;
			vg.insertEdge(s, e);
		}

		cout << vg.cnt() << '\n';
	}

	return 0;
}