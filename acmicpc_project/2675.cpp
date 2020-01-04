#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	for (int l = 0; l < n; l++) {

		string s;
		int repeat;

		cin >> repeat >> s;

		for (int i = 0; i < s.length(); i++) {
			for (int j = 0; j < repeat; j++) {
				cout << s[i];
			}
		}
		cout << '\n';
	}

	return 0;
}