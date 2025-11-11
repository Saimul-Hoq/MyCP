#include<bits/stdc++.h>
using namespace std;       //_________(1 + 0.01)^365 = 38____________||
#define endl "\n"             
typedef long long ll;      //_________(1 - 0.01)^365 = 0.02__________||         

int n;
bool check;
int ci, cj;
pair<int,int> d[] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

void mark(int row, int col, vector<vector<char>>&grid)
{
    //Horizontal:
    for(int c=1; c<=n; c++)
    {
        grid[row][c] = '#';
    }

    //Vertical:
    for(int r=1; r<=n; r++)
    {
        grid[r][col] = '#';
    }

    //Primary Diagonal:
    for(int r=row, c=col; r>=1 && c>=1; r--, c--)
    {
        grid[r][c] = '#';
    }
    for(int r=row, c=col; r<=n && c<=n; r++, c++)
    {
        grid[r][c] = '#';
    }

    //secondary Diagonal:
    for(int r=row, c=col; r>=1 && c<=n; r--, c++)
    {
        grid[r][c] = '#';
    }
    for(int r=row, c=col; r<=n && c>=1; r++, c--)
    {
        grid[r][c] = '#';
    }
}

bool valid(int r, int c)
{
    if(r>=1 && r<=n && c>=1 && c<=n) return true;
    return false;
}

void dfs(int r, int c, vector<vector<char>>&grid, vector<vector<bool>>&visit)
{
    if(r==ci && c==cj) check=true;
    visit[r][c] = true;

    for(int i=0; i<8; i++)
    {
        int cr = r + d[i].first;
        int cc = c + d[i].second;
        if(valid(cr, cc) && grid[cr][cc]!='#' && !visit[cr][cc])
        {
            dfs(cr, cc, grid, visit);
        }
    }
}

void saim()
{
    cin>>n;
    int ai, aj, bi, bj;
    cin>>ai>>aj>>bi>>bj>>ci>>cj;
    vector<vector<char>>grid(n+1, vector<char>(n+1, '.'));
    vector<vector<bool>>visit(n+1, vector<bool>(n+1, false));
    check=false;

    mark(ai, aj, grid);
    dfs(bi, bj, grid, visit);

    if(check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    saim();
    
    return 0;
}