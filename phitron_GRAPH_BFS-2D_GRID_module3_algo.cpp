#include<bits/stdc++.h>
using namespace std;

int row, col;
char grid[105][105];
bool visit[105][105];
pair<int, int> mv[] = {make_pair(-1,0),make_pair(1,0),make_pair(0,-1),make_pair(0,1)};
int level[105][105];
pair<int,int> path[105][105];

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
    q.push(make_pair(sr, sc));
    visit[sr][sc]=true;
    level[sr][sc]=0;
    path[sr][sc] = make_pair(-1, -1);

    while(!q.empty())
    {
        int pr = q.front().first;
        int pc = q.front().second;
        q.pop();

        cout<<pr<<" "<<pc<<endl;

        for(int i=0; i<4; i++)
        {
            int cr = pr + mv[i].first;
            int cc = pc + mv[i].second;
            if(valid(cr, cc) && grid[cr][cc]!='#' && (!visit[cr][cc]))
            {
                q.push(make_pair(cr, cc));
                visit[cr][cc]=true;
                level[cr][cc]=level[pr][pc]+1;
                path[cr][cc] = make_pair(pr,pc);
            }
        }
    }
}

int main()
{
    cin>>row>>col;
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>grid[r][c];
        }
    }

    memset(visit, false, sizeof(visit));
    memset(level, -1, sizeof(level));
    pair<int, int> pp = make_pair(-1, -1);
    for(int i=0; i<105; i++)
    {
        for(int j=0; j<105; j++)
        {
            path[i][j]=pp;
        }
    }
    
    int sr, sc;
    cout<<"Enter source row and source column: ";
    cin>>sr>>sc;

    bfs(sr, sc);

    int dr, dc;
    cout<<"Enter destination row and column: ";
    cin>>dr>>dc;
    cout<<"Shortest Distance = "<<level[dr][dc]<<endl;

    vector<pair<int,int> >pth;
    pair<int,int> p = make_pair(dr, dc);
    while(p!=make_pair(-1, -1))
    {
        pth.push_back(p);
        p = path[p.first][p.second];
    }

    cout<<"("<<pth.back().first<<","<<pth.back().second<<")";
    pth.pop_back();
    while(!pth.empty())
    {
        cout<<" -> ("<<pth.back().first<<","<<pth.back().second<<")";
        pth.pop_back();
    }
    cout<<endl;
    




    
    
    return 0;
}