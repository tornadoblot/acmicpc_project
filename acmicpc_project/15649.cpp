#include <iostream>
using namespace std;

int N, M;
int arr[9];
bool visited[9];

void visit(int cnt) 
{
	if (cnt == M) 
	{ 
		for (int i = 0; i < M; i++) 
			cout << arr[i] << ' ';
		
		cout << '\n'; 
		return; 
	}
	
	for (int i = 1; i <= N; i++)
		if (!visited[i])
		{ 
			visited[i] = true;
			arr[cnt] = i;
			visit(cnt + 1);
			visited[i] = false;
		}
} 

int main(void)
{
	cin >> N >> M;
	visit(0);
	return 0; 
  }
