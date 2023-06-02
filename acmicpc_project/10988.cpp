#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    string str, copy;
    short res = 1;

    cin >> str;
    copy = str;
    reverse(copy.begin(), copy.end());

    for (int i = 0; i < str.length() / 2 + 1; i++)
    {
        if (str[i] != copy[i])
        {
            res = 0;
            break;
        }
    }

    cout << res;

    return 0;
}