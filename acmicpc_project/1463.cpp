#include <iostream>
#include <array>
using namespace std;

array<int, 1000001> arr;

int main()
{
	int n;
	cin >> n;

	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;

	for (int i = 4; i <= n; i++)
	{
		arr[i] = arr[i - 1] + 1;

		if (!(i % 2) && arr[i / 2] + 1 < arr[i])
			arr[i] = arr[i / 2] + 1;

		if (!(i % 3) && arr[i / 3] + 1 < arr[i])
			arr[i] = arr[i / 3] + 1;
	}

	cout << arr[n] << '\n';

	return 0;
}


//int f(int a) 
//{ 
//	return a < 2 ? 0 : std::min(f(a / 2) + a % 2, f(a / 3) + a % 3) + 1;
//}
//
//main(int n) 
//{ 
//	scanf("%d", &n), printf("%d", f(n)); 
//}