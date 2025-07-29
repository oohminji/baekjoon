#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;

	int N;
	cin >> N;
	int h;
	int count = 1;
	
	for (int i = 0; i < N; i++)
	{
		cin >> h;
		s.push(h);

	}
	int max = s.top();
	while (!s.empty())
	{
		s.pop();
		if(!s.empty())
		{
			if (s.top() > max)
			{
				max = s.top();
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}