#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;

	int comm;
	int x;
	stack <int> s;
	for (int i = 0; i < N; i++)
	{
		cin >> comm;

		if (comm == 1)
		{
			cin >> x;
			s.push(x);
		}
		else if (comm == 2)
		{
			if (!s.empty())
			{
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << "-1" << '\n';
		}
		else if (comm == 3)
		{
			cout << s.size() << '\n';
		}
		else if (comm == 4)
		{
			if (!s.empty())
				cout << "0" << '\n';
			else
				cout << "1" << '\n';
		}
		else if (comm == 5)
		{
			if (!s.empty())
				cout << s.top() << '\n';
			else
				cout << "-1" << '\n';
		}
	}

	return 0;
}