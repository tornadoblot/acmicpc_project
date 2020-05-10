#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> arr;
	int N, M, tmp, max;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}

	max = 0;

	for (int i = 0; i < arr.size() - 2; i++) {
		for (int j = i + 1; j < arr.size() - 1; j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				tmp = arr[i] + arr[j] + arr[k];

				if (tmp == M) {
					cout << M << '\n';
					return 0;
				}

				if (max < tmp && tmp < M) max = tmp;
			}
		}
	}

	cout << max << '\n';

	return 0;
}