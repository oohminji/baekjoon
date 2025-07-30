#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

	int T;
	cin >> T;
	int flag = 0;
	for (int j = 0; j < T; j++)
	{
		stack<char> s;
		string ps;
		cin >> ps;
		for (int i = 0; i < ps.size(); i++)
		{
			if (ps[i] == '(')
				s.push(ps[i]);

			else if (ps[i] == ')')
			{
				if (!s.empty())
					s.pop();
				else
					flag = 1;
			}		
		}
		//cout << "size->" << s.size() << '\n';
		if (!s.empty() || flag == 1)
			cout << "NO" << '\n';
		else
			cout << "YES" << '\n';

		flag = 0;

	}
	return 0;
}