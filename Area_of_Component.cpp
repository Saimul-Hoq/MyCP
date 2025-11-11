#include<bits/stdc++.h>
using namespace std;

int row,col,cnt;
char grid[1000][1000];
bool visit[1000][1000];
pair<int,int> direction[] = {make_pair(-1, 0), make_pair(1,0), make_pair(0, -1), make_pair(0, 1)};


bool valid(int r, int c)
{
    if((r>=0 && r<row) && (c>=0 && c<col))
    {
        return true;
    }
    return false;
}

void dfs(int sr, int sc)
{
    visit[sr][sc]=true;
    cnt++;

    for(int i=0; i<4; i++)
    {
        int cr = sr + direction[i].first;
        int cc = sc + direction[i].second;
        if(valid(cr, cc) && grid[cr][cc]=='.' && !visit[cr][cc])
        {
            dfs(cr, cc);
        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int r=0; r<n; r++)
    {
        for(int c=0; c<m; c++)
        {
            cin>>grid[r][c];
        }
    }
    row=n;
    col=m;

    memset(visit, false, sizeof(visit));
    cnt = 0;
    int area=INT_MAX;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(!visit[i][j] && grid[i][j]=='.')
            {
                
                dfs(i,j);
                if(area>cnt)
                {
                    area=cnt;
                }
                cnt=0;
                
            }
        }
    }

    

    if(area!=INT_MAX)
    {
        cout<<area<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
    return 0;
}