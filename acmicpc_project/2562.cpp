#include <iostream>
using namespace std;

int main()
{
	int num[9], max = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> num[i];
		if (num[max] < num[i]) max = i;
	}

	cout << num[max] << '\n' << (max + 1) << '\n';
		

	return 0;
}