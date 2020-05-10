#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {

	string s;
	int l[26] = { 0, }, max = 0, maxi;
	bool isdup = false;

	cin >> s;
	transform(s.begin(), s.end(), s.begin(), (int(*)(int))toupper);

	for (int i = 0; i < s.length(); i++) {
		l[s[i] - 'A']++;
	}

	for (int i = 0; i < 26; i++) {
		if (max < l[i]) {
			max = l[i];
			maxi = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == l[i] && maxi != i)
			isdup = true;
	}

	if (isdup) cout << '?';
	else cout << (char)('A' + maxi);

	return 0;
}