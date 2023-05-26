#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[101] = { 0, };
    int n, m;
    int i, j;

    for (int i = 1; i <= 100; i++)
    {
        arr[i] = i;
    }

    cin >> n >> m;

    while (m--)
    {
        cin >> i >> j;

        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}