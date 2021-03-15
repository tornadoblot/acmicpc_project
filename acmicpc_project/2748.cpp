#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<unsigned long long> fibo;
	fibo.push_back(0);
	fibo.push_back(1);

	for (int i = 2; i <= n; i++)
		fibo.push_back(fibo[i - 2] + fibo[i - 1]);

	cout << fibo[n] << '\n';

	return 0;
}