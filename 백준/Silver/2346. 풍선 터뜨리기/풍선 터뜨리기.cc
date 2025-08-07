#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> dq;
	deque<int> tempdq;
	int N;

	cin >> N;
	int val;
	int temp = 0;
	int temptemp = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> val;
		dq.push_back(val);
		tempdq.push_back(i+1);
	}

	while(!dq.empty()&&!tempdq.empty())
	{
	
		if (dq.front() > 0)
		{
			temp = dq.front();
			temptemp = tempdq.front();
	
			dq.pop_front();
			tempdq.pop_front();
			for (int j = 0; j < temp - 1; j++)
			{
				if (!dq.empty())
				{
					dq.push_back(dq.front());
					dq.pop_front();
					tempdq.push_back(tempdq.front());
					tempdq.pop_front();
				}
			}
		}
		else
		{

			temp = dq.front();
			temptemp = tempdq.front();
			dq.pop_front();
			tempdq.pop_front();
			for (int j = 0; j < -temp ; j++)
			{
				if (!dq.empty())
				{
					dq.push_front(dq.back());
					dq.pop_back();
					tempdq.push_front(tempdq.back());
					tempdq.pop_back();
				}
			}
		}
		
		cout << temptemp << ' ';
	}

	return 0;
}