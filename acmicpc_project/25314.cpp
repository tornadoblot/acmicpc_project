#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    while (n > 0)
    {
        n -= 4;
        cout << "long ";
    }

    cout << "int";

    return 0;
}