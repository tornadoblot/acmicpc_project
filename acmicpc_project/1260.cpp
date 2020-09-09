#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

const int MAX = 1001;

class Graph
{
public:

	void insertVertext(int v)
	{
		this->n = v;
	}

	void insertEdge(int start, int end)
	{
		adj[start].push_back(end);
		adj[end].push_back(start);
	}

	void sort()
	{
		for (int i = 0; i <= n; i++)
			std::sort(adj[i].begin(), adj[i].end());
	}

	void cleanVisted()
	{
		cout << '\n';
		for (int i = 0; i < MAX; i++)
			visited[i] = false;
	}

	void dfs(int s)
	{
		visited[s] = true;
		cout << s << ' ';

		for (int i = 0; i < adj[s].size(); i++)
		{
			if (!visited[adj[s][i]])
			{
				dfs(adj[s][i]);
			}
		}

		return;
	}

	void bfs(int s)
	{
		visited[s] = true;
		que.push(s);

		while (!que.empty())
		{
			s = que.front();
			que.pop();

			for (int i = 0; i < adj[s].size(); i++)
			{
				if (!visited[adj[s][i]])
				{
					que.push(adj[s][i]);
					visited[adj[s][i]] = true;
				}
			}

			cout << s << ' ';
		}
	}


private:
	int n;
	vector<int> adj[MAX];
	bool visited[MAX] = { 0, };
	queue<int> que;
};

int main()
{
	ios_base::sync_with_stdio(0);
	Graph* graph = new Graph;
	int N, M, V;
	int x, y;

	cin >> N >> M >> V;

	graph->insertVertext(N);
	
	while (M--)
	{
		cin >> x >> y;
		graph->insertEdge(x, y);
	}

	graph->sort();
	graph->dfs(V);
	graph->cleanVisted();
	graph->bfs(V);

	delete graph;

	return 0;
}