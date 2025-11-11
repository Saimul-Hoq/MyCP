#include <iostream>
using namespace std;

int lcs_length(const string &str1, const string &str2, int** dp, char** direction) {
    int m = str1.length();
    int n = str2.length();

    for (int i = 0; i <= m; i++)
        {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = 0;
            direction[i][j] = ' ';
        }
    }

    for (int i = 1; i <= m; i++)
        {
        for (int j = 1; j <= n; j++)
         {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                direction[i][j] = 'C';
            } else
             {
                if (dp[i - 1][j] >= dp[i][j - 1])
                {
                    dp[i][j] = dp[i - 1][j];
                    direction[i][j] = 'U';
                }
    else
        {
                    dp[i][j] = dp[i][j - 1];
                    direction[i][j] = 'L';
                }
            }
        }
    }

    return dp[m][n];
}

void print_lcs_table(const string &str1, const string &str2, int** dp, char** direction)
 {
    int m = str1.length();
    int n = str2.length();

    cout << "LCS Table for \"" << str1 << "\" and \"" << str2 << "\":" << endl;

    cout << "    ";
    for (int j = 0; j < n; j++)
        {
        cout << str2[j] << " ";
    }
    cout << endl;

    for (int i = 0; i <= m; i++)
        {
        if (i == 0)
         {
            cout << "   ";
        } else
        {
            cout << str1[i - 1] << " ";
        }
        for (int j = 0; j <= n; j++)
         {
            if (i == 0 && j == 0)
            {
                cout << dp[i][j] << " ";
            } else
             {
                cout << dp[i][j] << direction[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main() {
    string target = "madhuban";
    string word1 = "madhabi";
    string word2 = "madhurika";

    int m = target.length();
    int n1 = word1.length();
    int n2 = word2.length();

    int** dp1 = new int*[m + 1];
    char** direction1 = new char*[m + 1];
    int** dp2 = new int*[m + 1];
    char** direction2 = new char*[m + 1];
    for (int i = 0; i <= m; i++)
        {
        dp1[i] = new int[n1 + 1];
        direction1[i] = new char[n1 + 1];
        dp2[i] = new int[n2 + 1];
        direction2[i] = new char[n2 + 1];
    }

    int lcs_len1 = lcs_length(target, word1, dp1, direction1);
    int lcs_len2 = lcs_length(target, word2, dp2, direction2);
print_lcs_table(target, word1, dp1, direction1);
    print_lcs_table(target, word2, dp2, direction2);
    cout << "LCS Length for \"" << target << "\" and \"" << word1 << "\": " << lcs_len1 << endl;
    cout << "LCS Length for \"" << target << "\" and \"" << word2 << "\": " << lcs_len2 << endl;

    if (lcs_len1 > lcs_len2)
        {
        cout << "The most similar word = \"" << word1 << "\" ." << endl;
    } else if (lcs_len2 > lcs_len1) {
        cout << "The most similar word = \"" << word2 << "\" ." << endl;
    } else {
        cout << "Both words are equally similar to \"" << target << "\"." << endl;
    }
    for (int i = 0; i <= m; i++) {
        delete[] dp1[i];
        delete[] direction1[i];
        delete[] dp2[i];
        delete[] direction2[i];
    }
    delete[] dp1;
    delete[] direction1;
    delete[] dp2;
    delete[] direction2;

    return 0;
}
