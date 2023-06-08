#include <iostream>
#include <stack>
using namespace std;

char getNum(int n)
{
    if (n > 9)
    {
        return n - 10 + 'A';
    }

    return n + '0';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    long long n;
    int b;
    string ans = "";

    cin >> n >> b;

    while (n > 0)
    {
        ans += getNum(n % b);
        n /= b;
    }

    for (int i = ans.length() - 1; i >= 0; i--)
        cout << ans[i];

    return 0;
}