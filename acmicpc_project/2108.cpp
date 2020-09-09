#include <iostream>
#include <cmath>
using namespace std;

int arr[500001], sorted[500001], mArr[8001];
int N;

int averge()
{
	double sum = 0;

	for (int i = 0; i < N; i++)
		sum += arr[i];

	return round(sum / N);
}

int mid()
{
	int mid = N / 2;

	return arr[mid];
}

int mode()
{
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < 0) mArr[abs(arr[i]) + 4000]++;
		else mArr[arr[i]]++;
	}

	int max = 0;

	for (int i = 0; i < 8001; i++)
		if (mArr[max] < mArr[i]) max = i;

	bool isCap = false, isEnd = false;
	for (int i = 8000; i > 4000; i--)
	{
		if (mArr[max] == mArr[i] && isCap)
		{
			max = i;
			isEnd = true;
			break;
		}
		else if (mArr[max] == mArr[i])
			isCap = true;
	}

	if (!isEnd)
	{
		for (int i = 0; i <= 4000; i++)
		{
			if (mArr[max] == mArr[i] && isCap)
			{
				max = i;
				break;
			}
			else if (mArr[max] == mArr[i])
				isCap = true;
		}
	}

	if (max > 4000) return (max - 4000) * -1;
	else return max;
}

int arrange()
{
	return arr[N - 1] - arr[0];
}

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
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int tmp;
	cin >> N;

	int i = N, j = 0;
	while (i--)
	{
		cin >> tmp;
		arr[j++] = tmp;
	}

	mergeSort(0, N - 1);

	cout << averge() << '\n';
	cout << mid() << '\n';
	cout << mode() << '\n';
	cout << arrange() << '\n';

	return 0;
}