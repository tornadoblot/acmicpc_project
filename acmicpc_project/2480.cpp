#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    int res = 0;

    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        res = 10000 + a * 1000;
    }
    else if (a == b || a == c)
    {
        res = 1000 + a * 100;
    }
    else if (b == c)
    {
        res = 1000 + b * 100;
    }
    else
    {
        int max = a > b ? a : b;
        max = max > c ? max : c;

        res = max * 100;
    }

    cout << res;

    return 0;
}