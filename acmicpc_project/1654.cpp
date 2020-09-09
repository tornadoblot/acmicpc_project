#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	long long k, n, tmp;
	std::vector<long long> list;

	std::cin >> k >> n;

	while (k--)
	{
		std::cin >> tmp;
		list.push_back(tmp);
	}

	std::sort(list.begin(), list.end());

	long long left = 1, right = list.back(), mid, sum;

	while (left <= right)
	{
		mid = (left + right) / 2;
		sum = 0;

		for (int i = 0; i < list.size(); i++)
			sum += list[i] / mid;

		if (sum < n)
			right = mid - 1;
		else if(sum >= n)
			left = mid + 1;
	}

	std::cout << right << '\n';

	return 0;
}