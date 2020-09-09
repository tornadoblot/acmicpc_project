#include <iostream>
#include <stack>
using namespace std;

string isVPS(string& input)
{
	stack<char> stk;
	bool vpsChk = true;
	
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '(')
		{
			stk.push(')');
		}
		else
		{
			if (stk.empty()) {
				vpsChk = false;
				break;
			}

			stk.pop();
		}
	}

	if (!vpsChk || !stk.empty()) return "NO\n";
	else return "YES\n";
}

int main()
{
	int t;
	string input;
	cin >> t;

	while (t--)
	{
		cin >> input;
		cout << isVPS(input);
	}

	return 0;
}