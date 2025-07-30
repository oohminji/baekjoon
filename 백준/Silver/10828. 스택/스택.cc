#include<iostream>
#include<string>
#include <stack>

using namespace std;

int main()
{
	stack<int> s;
	int N;
	cin >> N;
	string comm;
	for (int i = 0; i < N; i++)
	{
		cin >> comm;
		if (comm == "push")
		{
			int data;
			cin >> data;
			s.push(data);
		}
		else if (comm == "pop")
		{
			if (!s.empty())
			{
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << "-1" << '\n';
			
		}
		else if (comm == "size")
		{
			cout << s.size() << '\n';
		}
		else if (comm == "empty")
		{
			if (!s.empty())
			{
				cout << "0" << '\n';
			}
			else
				cout << "1" << '\n';

		}
		else if (comm == "top")
		{
			if (s.empty())
				cout << "-1" << '\n';
			else
				cout << s.top() << '\n';
		}
	}
	return 0;
}