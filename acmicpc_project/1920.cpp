#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> A;

bool binarySearch(int find)
{
	int low = 0, high = A.size() - 1, mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (A[mid] == find)
			return true;
		else if (A[mid] > find)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return false;
}

int main()
{
	int N, tmp;

	scanf(" %d", &N);

	while (N--)
	{
		scanf(" %d", &tmp);
		A.push_back(tmp);
	}

	std::cin >> N;
	std::sort(A.begin(), A.end());

	while (N--)
	{
		scanf(" %d", &tmp);

		if (binarySearch(tmp))
			printf("1\n");
		else
			printf("0\n");
	}

	return 0;
}