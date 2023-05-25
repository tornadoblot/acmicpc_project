#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 

    int x, n, a, b;
    int res = 0;

    cin >> x >> n;

    while (n--)
    {
        cin >> a >> b;
        res += a * b;
    }

    if (res == x) cout << "Yes";
    else cout << "No";

    return 0;
}