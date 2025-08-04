#include<iostream>
#include<queue>
#include<string>
using namespace std;
int main()
{
	int N;
	cin >> N;
	string comm;
	int K;

	queue<int> q;

	for (int i = 0; i < N;i++)
	{
		cin >> comm;
		if (comm == "push")
		{
			cin >> K;
			q.push(K);
		}
		else if (comm == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
				q.pop();
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == "size")
		{
			cout << q.size() << '\n';
		}
		else if (comm == "empty")
		{
			if (q.empty())
			{
				cout << "1" << '\n';
			}
			else
				cout << "0" << '\n';
		}
		else if (comm == "front")
		{
			if (!q.empty())
			{
				cout << q.front() << '\n';
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == "back")
		{
			if (!q.empty())
			{
				cout << q.back() << '\n';
			}
			else
				cout << "-1" << '\n';
		}
	}
	return 0;
}