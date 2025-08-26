#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define X first
#define Y second 

int N,M;

int board[100][100] = {};
int vis[100][100]; 
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; 
int main(void) {
   cin >> N >> M;
   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         scanf("%1d",&board[i][j]);
      }
   }
   queue<pair<int, int> > Q;
   vis[0][0] = 1; 
   Q.push({ 0,0 }); 
   while (!Q.empty()) {
      pair<int, int> cur = Q.front(); Q.pop();
      for (int dir = 0; dir < 4; dir++) { 
         int nx = cur.X + dx[dir];
         int ny = cur.Y + dy[dir]; 
         if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue; 
         if (vis[nx][ny]>=1 || board[nx][ny] != 1) continue; 
         vis[nx][ny] = vis[cur.X][cur.Y]+1; 
         Q.push({ nx,ny });
      }
   }
   if (N > 1 && M > 1)
   {
      cout << vis[N - 1][M - 1];
   }
}
