#include<bits/stdc++.h>
using namespace std;

pair<int,int> parent[1005][10005];
int row,col;
char grid[1005][1005];
bool visit[1005][1005];

pair<int,int> direction[] = {make_pair(0,1), make_pair(0,-1), make_pair(-1,0), make_pair(1,0)};

bool valid(int r, int c)
{
    if((r>=0 && r<row) && (c>=0 && c<col))
    {
        return true;
    }
    return false;
}

void bfs(int sr, int sc)
{
    queue<pair<int,int> >q;
    q.push(make_pair(sr,sc));
    visit[sr][sc]=true;
    parent[sr][sc]=make_pair(-1, -1);
    
    while(!q.empty())
    {
        int pr = q.front().first;
        int pc = q.front().second;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int cr = pr + direction[i].first;
            int cc = pc + direction[i].second;
            if(valid(cr,cc) && grid[cr][cc]!='#' && !visit[cr][cc])
            {
                q.push(make_pair(cr,cc));
                visit[cr][cc]=true;
                parent[cr][cc]=make_pair(pr,pc);
                
                
            }
        }
    }
}

int main()
{
    int rr, rc, dr, dc;
    cin>>row>>col;
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>grid[r][c];
            if(grid[r][c]=='R')
            {
                rr = r;
                rc = c;
            }
            if(grid[r][c]=='D')
            {
                dr = r;
                dc = c;
            }
        }
    }
    memset(visit, false, sizeof(visit));
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            parent[r][c]=make_pair(-1,-1);
        }
    }

    bfs(rr, rc);

    vector<pair<int,int> >v;
    pair<int,int> p;
    p=parent[dr][dc];
    int desr = parent[dr][dc].first;
    int desc =parent[dr][dc].second;
    
    while(desr!=-1 && desc!=-1)
    {
        v.push_back(make_pair(desr,desc));
        int r=desr;
        int c=desc;
        p = parent[r][c];
        desr = p.first;
        desc = p.second;
        
    }
    v.pop_back();
    if(visit[dr][dc])
    {
        while(!v.empty())
        {
            int r = v.back().first;
            int c = v.back().second;
            v.pop_back();
            grid[r][c]='X';
        }
    }

    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<grid[r][c];
        }
        cout<<endl;
    }
    cout<<endl;

    

    
    
    return 0;
}