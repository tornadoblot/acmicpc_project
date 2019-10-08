#include <iostream>
#include <math.h>
using namespace std;

bool d(int n)
{
	int tmp, ori = n, cha;
	bool chk = true;

	tmp = ori % 10;
	ori /= 10;
	cha = tmp - ori % 10;

	while (ori > 9)
	{
		tmp = ori % 10;
		ori /= 10;
		if (tmp - ori % 10 != cha)
		{
			chk = false;
			break;
		}
	}

	return chk;
}

int main()
{
	int n, cnt = 0;
	
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (d(i)) cnt++;
	}

	cout << cnt;

	return 0;
}