#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;
        cout << str.front() << str.back() << '\n';
    }

    return 0;
}