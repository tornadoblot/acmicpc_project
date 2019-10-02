#include <iostream>
#include <vector>
using namespace std;

long long sum(std::vector<int>& a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++)
	{
		ans += a[i];
	}
	return ans;
}

int main()
{
	vector<int> test = { 1, 2, 3, 4 };
	cout << sum(test);

	return 0;
}