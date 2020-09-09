#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> tree;

long long treeCut(int cut)
{
	long long sum = 0;

	for (int i = tree.size() - 1; i > -1 && tree[i] > cut; i--)
		sum += tree[i] - cut;

	return sum;
}

long long binarySearch(int find)
{
	int left = 0, right = tree.back();
	long long mid, cut, result = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		cut = treeCut(mid);

		if (cut >= find)
		{
			if (result < mid) result = mid;
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, tmp;

	cin >> n >> m;

	while(n--)
	{ 
		cin >> tmp;
		tree.push_back(tmp);
	}

	sort(tree.begin(), tree.end());
	cout << binarySearch(m) << '\n';
	
	return 0;
}