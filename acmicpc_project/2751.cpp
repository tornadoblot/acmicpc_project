#include <iostream>
using namespace std;

int arr[1000001], sorted[1000001];

void merge(int left, int mid, int right)
{
	int i = left, j = mid + 1, k = left, l;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}

	if (i > mid)
	{
		for (l = j; l <= right; l++)
			sorted[k++] = arr[l];
	}
	else
	{
		for (l = i; l <= mid; l++)
			sorted[k++] = arr[l];
	}

	for (l = left; l <= right; l++)
		arr[l] = sorted[l];
}

void mergeSort(int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid + 1, right);
		merge(left, mid, right);
	}
}

int main()
{
	int n, tmp, i = 0;

	cin >> n;
	
	int j = n;
	while (j--)
	{
		cin >> tmp;
		arr[i++] = tmp;
	}

	mergeSort(0, n - 1);

	for (j = 0; j < n; j++)
		cout << arr[j] << '\n';

	return 0;
}