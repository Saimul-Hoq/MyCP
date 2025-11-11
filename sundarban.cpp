#include<bits/stdc++.h>
using namespace std;

int n;
char grid[35][35];
bool visit[35][35];
int level[35][35];
pair<int,int> mv[4];

bool valid(int r, int c)
{
    if((r>=0 && r<n) && (c>=0 && c<n))
    {
        return true;
    }
    return false;
}

void bfs(int sr, int sc)
{
    visit[sr][sc] = true;
    level[sr][sc] = 0;
    queue<pair<int,int> > q;
    q.push(make_pair(sr, sc));

    while(!q.empty())
    {
        int pr = q.front().first;
        int pc = q.front().second;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int cr = pr + mv[i].first;
            int cc = pc + mv[i].second;
            if(valid(cr,cc) && grid[cr][cc]!='T' && !visit[cr][cc])
            {
                q.push(make_pair(cr,cc));
                visit[cr][cc] = true;
                level[cr][cc] = level[pr][pc]+1;
            }
        }
    }
}

 
int main()
{
    
    int sr,sc, er,ec;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>grid[i][j];
                if(grid[i][j] == 'S')
                {
                    sr = i; 
                    sc = j;
                }
                if(grid[i][j] == 'E')
                {
                    er = i; 
                    ec = j;
                }
            }
        }
        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));
        mv[0] = make_pair(0,1);
        mv[1] = make_pair(0,-1);
        mv[2] = make_pair(1, 0);
        mv[3] = make_pair(-1, 0);
    
        bfs(sr,sc);
    
        cout<<level[er][ec]<<endl;
    
    }


    
    
    return 0;
}