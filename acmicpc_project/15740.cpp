#include <iostream>
#include <string>
using namespace std;

string a, b;

bool isngt()
{
	bool chk = false;

	if (a[0] == '-') chk = !chk;
	if (b[0] == '-') chk = !chk;

	return chk;
}

void pl()
{
	if (a[a.length() - 1] == '-')
	{
		a = a.substr(0, a.length() - 1);
		b = b.substr(0, b.length() - 1);
	}

	int min, max;
	if (a.length() > b.length())
	{
		min = b.length();
		max = a.length();
	}
	else
	{
		min = a.length();
		max = b.length();
	}

	string ans = "0";

	for (int i = 0; i < min; i++)
	{
		int carry = stoi(a[i]) + stoi(b[i]) + ans[i];



	}
}

void min()
{

}

int main()
{
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());	

	if (isngt()) min();
	else pl();

	return 0;
}