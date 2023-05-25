//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int T, tmp;
//	priority_queue<int, vector<int>, greater<int> > pQ;
//
//	cin >> T;
//
//	while (T--)
//	{
//		cin >> tmp;
//		
//		if (tmp == 0)
//		{
//			if (pQ.empty())
//			{
//				cout << "0\n";
//				continue;
//			}
//
//			cout << pQ.top() << '\n';
//			pQ.pop();
//		}
//		else
//		{
//			pQ.push(tmp);
//		}
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

class PriorityQue
{
public:
	void Push(int n)
	{
		if (++size == 0)
		{
			heap[1] = n;
			return;
		}
		else
		{
			heap[size] = n;
			while(heap[size / 2] )
		}
	
	}

	int Pop()
	{
		if (IsEmpty()) return 0;
		else
		{

		}
	}

	bool IsEmpty()
	{
		return size > 0 ? false : true;
	}

private:
	int size = -1;
	int heap[100002];
};

int main()
{
	int 

}