#include<bits/stdc++.h>
using namespace std;

int row, col;
char grid[1000][1000];
bool visit[1000][1000];
pair<int,int> mv[]= {make_pair(-1,0),make_pair(1,0),make_pair(0,-1),make_pair(0,1)};

bool valid(int r, int c)
{
    if((r>=0 && r<row) && (c>=0 && c<col))
    {
        return true;
    }
    return false;
}

int room;
void dfs(int sr, int sc)
{
    
    grid[sr][sc]='#';
    room++;

    for(int i=0; i<4; i++)
    {
        int cr = sr + mv[i].first;
        int cc = sc + mv[i].second;
        if(valid(cr, cc) && grid[cr][cc]!='#' && !visit[cr][cc])
        {
            dfs(cr, cc);
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
    int component=0;
    
    vector<int>roomv;
    room=0;
    for(int r=0; r<row; r++)
    {
            for(int c=0; c<col; c++)
            {
                if(grid[r][c]=='.')
                {
                    room=0;
                    dfs(r,c);
                    roomv.push_back(room);
                    
                }
            }
    }

    sort(roomv.begin(), roomv.end());

    if(roomv.empty())
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i: roomv)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    
    
    
    return 0;
}