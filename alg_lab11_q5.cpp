#include <iostream>
#include <vector>
#include <string>
using namespace std;


int LCSLength(const string& X, const string& Y) {
    int m = X.length();
    int n = Y.length();

    
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

   
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; 
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
            }
        }
    }

    
    return dp[m][n];
}


void printLCS(const string& X, const string& Y) {
    int m = X.length();
    int n = Y.length();
    
    
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, 0));

    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1; 
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
            }
        }
    }

    
    int index = dp[m][n];
    string lcs(index, ' '); 
    int i = m, j = n;

    while (i > 0 && j > 0) {
        
        if (X[i - 1] == Y[j - 1]) {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        } 
        
        else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    
    cout << "Longest Common Subsequence: " << lcs << endl;
}

int main() {
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    
    int length = LCSLength(X, Y);
    cout << "Length of Longest Common Subsequence: " << length << endl;

   
    printLCS(X, Y);

    return 0;
}
