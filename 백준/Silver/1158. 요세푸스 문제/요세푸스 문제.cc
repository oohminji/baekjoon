
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue <int> q;

	int N;
	int K;

	cin >> N >> K;

	for (int i = 1; i < N+1; i++)
	{
		q.push(i);
	}
	cout << "<";
	while (q.size() != 1)
	{
		for (int j = 1; j < K; j++)
		{
			q.push(q.front());
			q.pop();
		}
			cout << q.front() << ", ";
			q.pop();
	}
	cout << q.front()<<">";

	return 0;
}