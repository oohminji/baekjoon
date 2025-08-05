#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq;
	
	int N;
	cin >> N;

	string comm;
	int K;
	for (int i = 0;i < N;i++)
	{
		cin >> comm;
		if (comm == "push_front")
		{
			cin >> K;
			dq.push_front(K);
		}
		else if (comm == "push_back")
		{
			cin >> K;
			dq.push_back(K);
		}
		else if (comm == "pop_front")
		{
			if (!dq.empty())
			{
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == "pop_back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == "size")
		{
			cout << dq.size() << '\n';
		}
		else if (comm == "empty")
		{
			if (dq.empty())
			{
				cout << "1" << '\n';
			}
			else
				cout << "0" << '\n';
		}
		else if (comm == "front")
		{
			if (!dq.empty())
			{
				cout << dq.front() << '\n';
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == "back")
		{
			if (!dq.empty())
			{
				cout << dq.back() << '\n';
			}
			else
				cout << "-1" << '\n';
		}
	}
	return 0;
}