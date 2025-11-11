#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


int knapsack(int W, vector<int>& weights, vector<int>& values, vector<bool>& selectedJars) {
    int n = weights.size();
    vector<vector<int> > dp(n + 1, vector<int>(W + 1, 0));


    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (weights[i - 1] <= w) {
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }


    int w = W;
    for (int i = n; i > 0 && w > 0; i--) {
        if (dp[i][w] != dp[i - 1][w]) {
            selectedJars[i - 1] = true;
            w -= weights[i - 1];
        }
    }

    return dp[n][W];
}


int minNotes(int amount, vector<int>& notes) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; i++) {
        for (int note : notes) {
            if (i >= note && dp[i - note] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - note] + 1);
            }
        }
    }

    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    cout<<"Algorithm: 0-1 knapsack"<<endl;

    int arr[]={3, 1, 2, 4, 5, 6};
    vector<int> weights(arr, arr+6) ;
    int val[]={2, 4, 5, 5, 7, 8};
    vector<int> values(val, val+6);
    int W = 15; 
    int note[]={1, 2, 5, 10, 20, 50, 100};
    vector<int> notes(note, note+7);  

    vector<bool> selectedJars(weights.size(), false);
    

    int maxTasteValue = knapsack(W, weights, values, selectedJars);
    cout << "Maximum Taste Value: " << maxTasteValue << endl;

    cout << "Selected Jars: ";
    for (int i = 0; i < selectedJars.size(); i++) {
        if (selectedJars[i]) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;


    int minNumberOfNotes = minNotes(maxTasteValue, notes);
    if (minNumberOfNotes != -1) {
        cout << "Minimum number of notes required to pay "<< minNumberOfNotes << endl;
    } else {
        cout << "It is not possible to pay the exact amount with the given notes." << endl;
    }

    return 0;
}
