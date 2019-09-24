#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t, cnt = 0;
	cin >> t;
	bool start, end;

	while (t--)
	{
		int x1, y1, x2, y2, n, cx, cy, cr, dx, dy;
		double d;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		while (n--)
		{
			cin >> cx >> cy >> cr;
			dx = x1 - cx;
			dy = y1 - cy;
			d = sqrt(dx * dx + dy * dy);
			start = d < cr ? true : false;

			dx = x2 - cx;
			dy = y2 - cy;
			d = sqrt(dx * dx + dy * dy);
			end = d < cr ? true : false;

			if (start == end) continue;
			else if (start != end) cnt++;
		}

		cout << cnt << endl;
		cnt = 0;
	}

	return 0;
}