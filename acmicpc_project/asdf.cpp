#include <iostream>
#include <cmath>
using namespace std;

// Returns factorial of n
int fact(int n)
{
    if (n == 0)
        return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
	long double res = 0;

	for (int i = 1; i <= 5; i++)
	{
        double g = nCr(5, i * i) * pow(0.4, i * i) * pow(0.6, 5 - i * i);
        cout << i << " * 0.6 * " << g << " + ";
        res += i * 0.6 * g;
	}
    cout << '\n' << res;

	return 0;
}