#include <iostream>
using namespace std;

int main()
{
	int t, cnt = 0;
	cin >> t;

	while (t--)
	{
		int x1, y1, x2, y2, n, cx, cy, cr;
		double sdx, sdy, ddx, ddy, sd, dd;
		cin >> x1 >> y1 >> x2 >> y2 >> n;
		while (n--)
		{
			cin >> cx >> cy >> cr;
			sdx = x1 - cx;
			sdy = y1 - cy;
			sd = sdx * sdx + sdy * sdy;

			ddx = x2 - cx;
			ddy = y2 - cy;
			dd = ddx * ddx + ddy * ddy;

			if (sd <= cr && dd <= cr) continue;
			else if (sd <= cr || dd <= cr) cnt++;
		}

		cout << cnt;
		cnt = 0;
	}

	return 0;
}