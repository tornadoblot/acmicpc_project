#include <iostream>
#include <string>

using namespace std;

int main() {

	int list[26];
	for (int i = 0; i < 26; i++) list[i] = -1;
	string s;

	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (list[s[i] - 'a'] == -1)
			list[s[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++)
		cout << list[i] << ' ';

	return 0;
}