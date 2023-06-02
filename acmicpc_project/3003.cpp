#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int piece[7];
    int ans[7] = { 0, 1, 1, 2, 2, 2, 8 };

    for (int i = 1; i <= 6; i++)
    {
        int n;
        cin >> n;
        piece[i] = n;
    }

    for (int i = 1; i <= 6; i++)
    {
        cout << ans[i] - piece[i] << " ";
    }

    return 0;
}