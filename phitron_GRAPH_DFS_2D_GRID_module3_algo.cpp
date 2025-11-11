#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
bool visit[105][105];
pair<int, int> mv[] = {make_pair(-1, 0), make_pair(1,0), make_pair(0, -1), make_pair(0, 1)};

int row, col;

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
    cout<<sr<<" "<<sc<<endl;
    visit[sr][sc]=true;

    for(int i=0; i<4; i++)
    {
        int chr = sr+mv[i].first;
        int chc = sc+mv[i].second;
        if(valid(chr, chc) && (!visit[chr][chc]))
        {
            dfs(chr, chc);
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

    int sr, sc;
    cout<<"Enter source row and column: ";
    cin>>sr>>sc;

    memset(visit, false, sizeof(visit));
    dfs(sr, sc);
    
    
    return 0;
}