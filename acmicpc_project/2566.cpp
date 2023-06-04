#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int x, y, max = -1;
    int tmp;

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            cin >> tmp;

            if (tmp > max)
            {
                x = i;
                y = j;
                max = tmp;
            }
        }
    }

    cout << max << '\n';
    cout << x << ' ' << y;


    return 0;
}
