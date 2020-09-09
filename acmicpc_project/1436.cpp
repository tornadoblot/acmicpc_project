#include <iostream>
using namespace std;

int main() {

	long long result = 666;
	bool wasSix = false;
	int N, cnt = 0;

	cin >> N;

	while (N) {
		for (long long i = result++; i > 0; i /= 10)
		{
			if (i % 10 == 6)
			{
				if (cnt >= 2)
				{
					cnt++; break;
				}
				else if (wasSix) cnt++;
				else {
					cnt++; wasSix = true;
				}
			}
			else
			{
				cnt = 0; wasSix = false;
			}
		}

		if (cnt > 2) N--;
		wasSix = false;
		cnt = 0;
	}

	cout << --result << '\n';


	return 0;
}