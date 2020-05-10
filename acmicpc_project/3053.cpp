#include <iostream>
using namespace std;


int main() {

	double n;

	cin >> n;

	cout << fixed;
	cout.precision(6);

	cout << n * n * 3.14159265358979323846 << '\n';
	cout << n * n * 2 << '\n';

	return 0;
}