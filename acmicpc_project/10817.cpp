#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
	
	return;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);

	cout << b;

	return 0;
}