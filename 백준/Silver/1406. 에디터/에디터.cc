#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	string S;
	cin >> S;
	cin.ignore();
	list<char> K = {S.begin(), S.end()};
	list<char>::iterator t = K.end();
	int M;
	cin >> M;
	cin.ignore();

	char comm,comm2;
	for (int i = 0; i < M; i++)
	{
		cin >> comm;

		if (comm == 'L')
		{
			if (t != K.begin())
			{
				--t;
			}
		}
		else if (comm == 'D')
		{
			if (t != K.end())
			{
				++t;
			}
		}
		else if (comm == 'B')
		{

			if (t != K.begin())
			{
				--t;
				t = K.erase(t);
			}
			else if (t == K.end())
			{
				t = K.erase(t);
			}
		}
		else if (comm == 'P')
		{
			cin >> comm2;
			K.insert(t, comm2);
		}
	}
	for (auto j : K)
		cout << j;

	return 0;
}

