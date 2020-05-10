#include <iostream>
#include <vector>
using namespace std;

int main() {

	pair<int, int> arr[50];
	int N, i, grade;

	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> arr[i].first >> arr[i].second;
	}

	for (i = 0; i < N; i++) {
		grade = 0;

		for (int j = 0; j < N; j++) {
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second) grade++;
		}

		cout << grade + 1 << ' ';
	}
	return 0;
}