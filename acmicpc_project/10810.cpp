#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[101] = { 0, };
    int n, m;
    int i, j, k;

    cin >> n >> m;

    while (m--)
    {
        cin >> i >> j >> k;

        for (int a = i; a <= j; a++)
        {
            arr[a] = k;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}