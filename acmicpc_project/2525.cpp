#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    b += c;
    while (b > 59)
    {
        b -= 60;
        a++;

        if (a > 23) a = 0;
    }

    cout << a << ' ' << b;

    return 0;
}