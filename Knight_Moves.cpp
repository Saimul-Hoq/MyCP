#include<bits/stdc++.h>
using namespace std;

int row, col;
bool visit[100][100];
int level[100][100];

pair<int,int> direction[] = {make_pair(-2,-1),make_pair(-1,-2),make_pair(-2,1),make_pair(-1,2),make_pair(1,-2),make_pair(2,-1),make_pair(2,1),make_pair(1,2)};

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
    level[sr][sc]=0;
    visit[sr][sc]=true;

    while(!q.empty())
    {
        int pr = q.front().first;
        int pc = q.front().second;
        q.pop();

        for(int i=0; i<8; i++)
        {
            int cr = pr + direction[i].first;
            int cc = pc + direction[i].second;
            if(valid(cr,cc) && !visit[cr][cc])
            {
                q.push(make_pair(cr,cc));
                visit[cr][cc]=true;
                level[cr][cc]=level[pr][pc]+1;
            }
        }
    }


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, kr, kc, qr, qc;
        cin>>n>>m>>kr>>kc>>qr>>qc;
        row=n;
        col=m;
        memset(visit, false, sizeof(visit));
        memset(level, -1, sizeof(level));
        

        bfs(kr, kc);

        if(visit[qr][qc])
        {
            cout<<level[qr][qc]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        

    }
    
    
    return 0;
}