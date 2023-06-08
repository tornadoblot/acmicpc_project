#include <iostream>
#include <cmath>
using namespace std;

int getNum(char ch)
{
    if ('0' <= ch && ch <= '9')
    {
        return ch - '0';
    }
 
    return ch - 'A' + 10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string n;
    int b;
    long long ans = 0;

    cin >> n >> b;


    for (int i = 0; i < n.length(); i++)
    {
        ans += pow(b, i) * getNum(n[n.length() - 1 - i]);
    }

    cout << ans;

    return 0;
}