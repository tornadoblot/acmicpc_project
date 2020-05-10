#include <iostream>

using namespace std;

int main() {
	string word;
	int cnt = 0, tmp;


	cin >> word;
	for (int i = 0; i <= word.length() - 1; i++) {
		if ('A' <= word[i] && word[i] <= 'O')
			tmp = (word[i] - 'A') / 3 + 3;
		else if ('P' <= word[i] && word[i] <= 'S')
			tmp = 8;
		else if ('T' <= word[i] && word[i] <= 'V')
			tmp = 9;
		else tmp = 10;

		cnt += tmp;
	}

	cout << cnt;
	return 0;
}