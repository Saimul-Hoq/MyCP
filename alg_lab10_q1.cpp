#include <iostream>
#include <vector>
#include <climits>
using namespace std;


void matrixChainOrder(vector<int>& p, vector<vector<int> >& cost, vector<vector<int> >& k) {
    int n = p.size() - 1; 
    cost.resize(n, vector<int>(n, 0));
    k.resize(n, vector<int>(n, 0));

    for (int L = 2; L <= n; L++) { 
        for (int i = 0; i < n - L + 1; i++) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;
            for (int split = i; split < j; split++) {
                int q = cost[i][split] + cost[split + 1][j] + p[i] * p[split + 1] * p[j + 1];
                if (q < cost[i][j]) {
                    cost[i][j] = q;
                    k[i][j] = split;
                }
            }
        }
    }
}


void printTable(const vector<vector<int> >& table, const string& title) {
    cout << "\n" << title << ":\n";
    for (const auto& row : table) {
        for (const auto& val : row) {
            if (val == 0) 
                cout << "  -  ";
            else 
                cout << val << "  ";
        }
        cout << "\n";
    }
}

int main() {
    
    int carr[] = {30, 35,15,5,10,20,25};
    //int arr[]= {10, 20, 30, 40, 30};
    vector<int> dimensions(carr,carr+7) ; 

    
    vector<vector<int> > costTable, kTable;

    
    matrixChainOrder(dimensions, costTable, kTable);

   
    printTable(costTable, "Cost Table (Minimum Multiplication Cost)");
    printTable(kTable, "K-Value Table (Split Points for Optimal Parenthesization)");

    return 0;
}