#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    char word[5][16] = { 0, };
    string n;

    for (int i = 0; i < 5; i++)
    {
        cin >> n;

        for (int j = 0; j < n.length(); j++)
        {
            word[i][j] = n[j];
        }
    }

    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (word[j][i] != 0)
            {
                cout << word[j][i];
            }
        }
    }

    return 0;
}