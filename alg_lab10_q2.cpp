#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Function to solve the 0/1 Knapsack problem
void knapsack(int capacity, vector<int>& weights, vector<int>& profits, vector<string>& items) {
    int n = weights.size();
    vector<vector<int> > dp(n + 1, vector<int>(capacity + 1, 0));

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + profits[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // Display the DP table
    cout << "\nKnapsack DP Table:\n";
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= capacity; w++) {
            cout << setw(5) << dp[i][w];
        }
        cout << endl;
    }

    // Backtrack to find the selected items
    int w = capacity;
    vector<string> selectedItems;
    int totalProfit = dp[n][capacity];

    for (int i = n; i > 0 && w > 0; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            selectedItems.push_back(items[i - 1]);
            w -= weights[i - 1];
        }
    }

    // Display the results
    cout << "\nSelected Items:\n";
    for (const string& item : selectedItems) {
        cout << "- " << item << endl;
    }
    cout << "Total Profit: " << totalProfit << " tk\n";
}

int main() {
    // Input: weights, profits, and item names
    int w[]= {7, 5, 2, 5, 3};
    vector<int> weights(w, w+5);
    int p[] = {700, 600, 240, 250, 1050};
    vector<int> profits(p, p+5) ;
    string str[] = {"7kg Rice", "5kg Lentils", "2kg Sugar", "5kg Salt", "3kg Basmati Rice"};
    vector<string> items(str, str+5);

    int capacity = 12; // Maximum weight capacity

    // Solve the knapsack problem
    knapsack(capacity, weights, profits, items);

    return 0;
}