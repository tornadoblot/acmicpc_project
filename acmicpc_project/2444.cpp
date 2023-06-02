#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            cout << ' ';

        for (int j = 0; j < i * 2 + 1; j++)
            cout << '*';

        cout << '\n';
    }

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; i + j <= n - 1; j++)
            cout << ' ';

        for (int j = 0; j < i * 2 - 1; j++)
            cout << '*';

        cout << '\n';
    }

    return 0;
}