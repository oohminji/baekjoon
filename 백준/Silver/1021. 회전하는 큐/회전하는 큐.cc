#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq;

	int N;
	int M;
	int count = 0;
	int del;
	int loc = 0;
	cin >> N;
	cin >> M;

	for (int i = 1; i < N + 1; i++)
	{
		dq.push_back(i);
	}

	for (int k = 0; k < M; k++)
	{
		cin >> del;

		for (int p = 0; p < dq.size(); p++)
		{
			if (dq.at(p) == del)
				loc = p;
		}
		if (loc <= dq.size() / 2 && dq.front() != del)
		{
			while (1)
			{
				if (dq.front() == del)
				{
					dq.pop_front();

					break;
				}
				
				else if (!dq.empty()&&dq.front() != del)
				{
					dq.push_back(dq.front());
					dq.pop_front();
					count++;
				}
			}
		}
		else if (dq.front() == del)
		{
			if(!dq.empty())
				dq.pop_front();
		}
		else if(loc > dq.size() / 2 && dq.front() != del)
		{
			while (1)
			{
				if (dq.front() == del)
				{
					dq.pop_front();

					break;
				}
				else if (!dq.empty() && dq.front() != del)
				{
					dq.push_front(dq.back());
					dq.pop_back();
					count++;
				}
			}
		}
		loc = 0;
	}
	cout << count;

	return 0;
}