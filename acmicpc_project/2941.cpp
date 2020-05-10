#include <iostream>
#include <string>

using namespace std;

int main() {

	string list[] = { "dz=", "lj", "nj", "c=", "c-", "d-", "s=", "z=" };
	string word;

	int pos = 0;

	cin >> word;


	for (int i = 0; i < 8;) {
		if ((int)word.find(list[i], pos) != -1) {
			pos = word.find(list[i], pos);
			word.replace(pos, list[i].length(), "a");
			continue;
		}
		pos = 0;
		i++;
	}

	cout << word.length();

	return 0;
}