#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	int v, e;
	int sum = 0;
	cin >> v >> e;
	vector<int> adj[101];
	for (int i = 0; i < e; i++)
	{
		int u, w;
		cin >> u >> w;
		adj[u].push_back(w);
		adj[w].push_back(u);
	}

	stack<int> s;
	bool vis[101] = { false };
	for (int j = 1; j <= v; j++)
	{
		s.push(1);
		vis[1] = true;
		while (!s.empty())
		{
			int cur = s.top();
			s.pop();
			for (auto nxt : adj[cur])
			{
				if (vis[nxt])continue;
				s.push(nxt);
				vis[nxt] = true;
			}

		}
	}
	for (int k = 1; k <= v; k++)
	{
		if (vis[k] == 1)
			sum++;
	}
	cout << sum - 1;
	return 0;
}