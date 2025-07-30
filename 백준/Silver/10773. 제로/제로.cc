#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> S;

	int K;
	cin >> K;
	int N;

	for (int i = 0; i < K; i++)
	{
		cin >> N;
		if (N == 0)
		{
			if(!S.empty())
				S.pop();
		}
		else
		{
			S.push(N);
		}
	}
	int sum = 0;
	int data ;
	while(!S.empty())
	{

		data = S.top();
		sum += data;
		if (!S.empty())
			S.pop();
	}
	cout << sum;

	return 0;
}