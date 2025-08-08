#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	string t;
	int flag1 = 0;
	int flag2 = 0;

	while (t != ".")
	{
		stack<char> s;
		getline(cin, t);
		for (int i = 0; i < t.size(); i++) {
			if (t[i] == '(' || t[i] == '[')
			{
				s.push(t[i]);
			}
			else if (t[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
					s.pop();
				else
					flag1 = 1;
			}
			else if (t[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
					s.pop();
				else
					flag2 = 1;
			}
		}

		if (!s.empty() || flag1 == 1 || flag2 == 1)
		{
			cout << "no" << '\n';
		}
		else if(t != ".")
		{
			cout << "yes" << '\n';
		}

		flag1 = 0;
		flag2 = 0;
	}

	return 0;
}