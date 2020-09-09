#include <iostream>
#include <deque>
#include <utility>
#include <vector>

using namespace std;
int main()
{
	int N, n, m;
	deque<pair<int, int>> que;

	cin >> N;

	while (N--)
	{
		while (!que.empty())
			que.pop_back();

		cin >> n >> m;
		int num = 0, value;
		while (n--)
		{
			cin >> value;
			que.push_back(make_pair(num++, value));
		}

		int print, cnt = 0;
		do
		{
			cnt++;

			for (int i = 1; i < que.size(); i++)
			{
				if (que.front().second < que[i].second)
				{
					auto tmp = que.front();
					que.pop_front();
					que.push_back(tmp);
					i = 0;
				}
			}

			print = que.front().first;
			que.pop_front();

		} while (print != m);

		cout << cnt << '\n';
	}

	return 0;
}