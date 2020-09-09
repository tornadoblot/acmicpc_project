#include <iostream>
#include <cstdio>
#include <stack>
using namespace std;

void print(bool& isBal, stack<char>& stk, int& len)
{
	if (isBal) printf("yes\n");
	else printf("no\n");

	while (!stk.empty())
		stk.pop();

	len = -1;
	isBal = true;

	return;
}

int main()
{
	char input, tmp;
	int len = -1;
	bool isBal = true;
	stack<char> stk;

	while (1)
	{
		// cin의 경우 공백과 줄바꿈을 무시하기에 scanf 사용
		scanf("%c", &input);
		len++;

		switch (input)
		{
		case '(':
		case '[':
			// )]가 나왔을 때 비교식을 단순화 하기 위해 입력받은 ([을 )]로 바꿔 스택에 푸쉬
			if (input == '(') input++;
			else input += 2;
			stk.push(input); 
			break;

		case ')':
		case ']':
			// 스택이 비어있을 때 top()함수 사용시 오류 발생, 미리 break로 case 탈출
			if (stk.empty())
			{
				isBal = false;
				break;
			}

			tmp = stk.top();
			stk.pop();
			if (tmp != input) isBal = false;
			break;

		// 줄바꿈 문자일 경우 문자열 길이에 포함시키지 않음
		case '\n': len++; break;

		case '.':
			if (!len) return 0;
			else {
				if (!stk.empty()) isBal = false;
			}

			print(isBal, stk, len);
			break;
		}
	}

	return 0;
}