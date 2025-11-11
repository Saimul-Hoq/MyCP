#include<bits/stdc++.h>
using namespace std;

int row, col;
char grid[1000][1000];
bool visit[1000][1000];
pair<int, int> mv[] = {make_pair(-1,0),make_pair(1,0),make_pair(0,-1),make_pair(0,1)};


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
    

    while(!q.empty())
    {
        int pr = q.front().first;
        int pc = q.front().second;
        q.pop();

     

        for(int i=0; i<4; i++)
        {
            int cr = pr + mv[i].first;
            int cc = pc + mv[i].second;
            if(valid(cr, cc) && grid[cr][cc]!='#' && (!visit[cr][cc]))
            {
                q.push(make_pair(cr, cc));
                visit[cr][cc]=true;
                
            }
        }
    }
}

int main()
{
    cin>>row>>col;
    int sr, sc, dr, dc;
    for(int r=0; r<row; r++)
    {
        for(int c=0; c<col; c++)
        {
            cin>>grid[r][c];
            if(grid[r][c]=='A')
            {
                sr = r;
                sc = c;
            }
            if(grid[r][c]=='B')
            {
                dr = r;
                dc = c;
            }
        }
    }

    memset(visit, false, sizeof(visit));

    bfs(sr, sc);

    if(visit[dr][dc])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
   
    
    return 0;
}