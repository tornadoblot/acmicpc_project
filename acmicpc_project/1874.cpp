#include <iostream>
#include <vector>
#include <algorithm>

std::vector<char> output;

bool check(std::vector<int>& input)
{
	std::vector<int> stack;
	int flag = 0, push = -1;

	for (int i = 1; i <= input.size(); i++)
		stack.push_back(i);

	while (!stack.empty())
	{
		if (stack[flag] == input.back())
		{
			if (flag != push) output.push_back('+');
			output.push_back('-');

			stack.erase(stack.begin() + flag);
			input.pop_back();
			if (flag > 0) flag--;
			if (push > -1) push--;
		}
		else if (stack[flag] < input.back())
		{
			if (push >= flag) flag++;
			while (stack[flag] < input.back())
			{
				flag++; push++;
				output.push_back('+');
			}

			output.push_back('+');
			output.push_back('-');
			stack.erase(stack.begin() + flag--);
			input.pop_back();
		}
		else return false;
	}

	return true;
}

int main()
{
	std::vector<int> input;
	int n, tmp;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> tmp;
		input.push_back(tmp);
	}

	std::reverse(input.begin(), input.end());

	if (check(input)) {
		for (int i = 0; i < output.size(); i++)
			std::cout << output[i] << '\n';
	}
	else std::cout << "NO\n";
	

	return 0;
}