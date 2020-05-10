#include <iostream>
using namespace std;

int main() {

	int buger, drink, tmp, i;

	cin >> buger;
	for(i = 0; i < 2; i++){
		cin >> tmp;
		
		if (buger > tmp) buger = tmp;
	}

	cin >> drink;
	cin >> tmp;
	
	if (drink > tmp) drink = tmp;

	cout << buger + drink - 50 << '\n';

	return 0;
}