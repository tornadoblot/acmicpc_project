#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    bool board[101][101] = { false };

    int n;
    int x, y;
    int ans = 0;

    cin >> n;

    while (n--)
    {
        cin >> x >> y;

        for (int i = 0; i < 10 && x + i <= 100; i++)
        {
            for (int j = 0; j < 10 && y + j <= 100; j++)
            {
                board[x + i][y + j] = true;
            }
        }
    }

    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (board[i][j])
                ans++;
        }
    }

    cout << ans;

    return 0;
}