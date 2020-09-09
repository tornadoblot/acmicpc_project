#include <iostream>
using namespace std;

int N, M;
int arr[9];

void visit(int cnt, int num)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';

		cout << '\n';
		return;
	}

	for (int i = num; i <= N; i++)
	{
		arr[cnt] = i;
		visit(cnt + 1, i);
	}
}

int main(void)
{
	cin >> N >> M;
	visit(0, 1);
	return 0;
}
