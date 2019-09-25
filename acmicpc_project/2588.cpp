#include <iostream>
using namespace std;

int main()
{
	int a, b, tmp;
	cin >> a >> b;

	tmp = a * b;
	for (int i = 0; i < 3; i++)
	{
		cout << a * (b % 10) << endl;
		b /= 10;
	}
	cout << tmp;


	return 0;
}