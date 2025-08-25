#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> adj[1001];
bool vis_s[1001] = { false };
void dfs(int cur)
{
	vis_s[cur] = true;
	cout << cur <<' ';
	for (auto nxt_s : adj[cur])
	{
		if (vis_s[nxt_s])continue;
		dfs(nxt_s);
	}
}
int main()
{
   int N, M, V;
   cin >> N >> M >> V;

   vector<int> adj_q[1001];
   for (int i = 0; i < M; i++)
   {
      int u, w;
      cin >> u >> w;
      adj[u].push_back(w);
      adj[w].push_back(u);
	  adj_q[u].push_back(w);
      adj_q[w].push_back(u);
   }
   
   stack<int> s;
   queue<int> q;
   bool vis_q[1001] = { false };

   q.push(V);
   vis_q[V] = true;
   for(int l = 1; l<=N; l++)
   {
		sort(adj[l].begin(),adj[l].end());
   }
   dfs(V);
   cout <<"\n";
   for (int k = 1; k <= N; k++)
   {
      while (!q.empty())
      {
         int cur_q = q.front();
		 cout << cur_q <<' ';
         q.pop();
		 sort(adj_q[cur_q].begin(),adj_q[cur_q].end());
         for (auto nxt_q : adj_q[cur_q])
         {
            if (vis_q[nxt_q])continue;
            q.push(nxt_q);
            vis_q[nxt_q] = true;
         }

      }
   }
   
   return 0;
}