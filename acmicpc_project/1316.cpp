#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<string> word;
	vector<char> dup;
	string tmp;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		word.push_back(tmp);
	}

	dup.push_back('0');
	for (int i = 0; i < word.size(); i++) {
		for (int j = 0; j < word[i].length(); j++) {

			if (dup.back() == word[i][j])
				continue;

			else if (find(dup.begin(), dup.end(), word[i][j]) == dup.end()) 
				dup.push_back(word[i][j]);

			else {
				word.erase(word.begin() + i);
				i--;
				break;
			}
		}
		dup.clear();
		dup.push_back('0');
	}

	cout << word.size();

	return 0;
}