#include <iostream>
using namespace std;

int main()
{
	int L;
	string input;
	unsigned long long hash = 0;
	unsigned long long r = 1;


	cin >> L >> input;

	for (int i = 0; i < L; i++)
	{
		hash = (hash + (input[i] - 'a' + 1) * r) % 1234567891;
		r = (r * 31) % 1234567891;
	}

	cout << hash;

	return 0;
}