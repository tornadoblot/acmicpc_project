#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int a, b, v, i = 0;

	cin >> a >> b >> v;

	cout << (int) ceil((double)(v - a) / (double)(a - b)) + 1;
	
	return 0;
}