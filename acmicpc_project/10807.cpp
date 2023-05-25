#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, a, v;
    int arr[201] = { 0, };

    cin >> n;

    while (n--)
    {
        cin >> a;
        a += 100;

        arr[a]++;
    }

    cin >> v;
    v += 100;
    cout << arr[v];

    return 0;
}
