#include <iostream>
using namespace std;

struct Item {
    string name;
    double weight;
    double cost;
    double cost_per_weight;
};

void sortItems(Item items[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].cost_per_weight < items[j + 1].cost_per_weight) {
                Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }
}

int main() {
    Item items[] = {
        {"Rice (7kg)", 7, 700, 0},
        {"Lentils (5kg)", 5, 600, 0},
        {"Sugar (2kg)", 2, 240, 0},
        {"Salt (5kg)", 5, 250, 0},
        {"Basmati Rice (3kg)", 3, 1050, 0}
    };

    int n = sizeof(items) / sizeof(items[0]);
    double capacity = 15;

    for (int i = 0; i < n; i++) {
        items[i].cost_per_weight = items[i].cost / items[i].weight;
    }

    sortItems(items, n);

    double totalCost = 0;
    double totalWeight = 0;

    double quantities[n];
    for(int i=0; i<n; i++)
    {
        quantities[n] = 0.0;
    }

    for (int i = 0; i < n && capacity > 0; i++) {
        if (items[i].weight <= capacity) {
            quantities[i] = items[i].weight;
            totalCost += items[i].cost;
            totalWeight += items[i].weight;
            capacity -= items[i].weight;
        }
        else {
            double fraction = capacity / items[i].weight;
            quantities[i] = items[i].weight * fraction;
            totalCost += items[i].cost * fraction;
            totalWeight += items[i].weight * fraction;
            capacity = 0;
        }
    }

    cout << "The total weight in the knapsack is: " << totalWeight << " kg" << endl;
    cout << "The minimum cost to fill the knapsack is: " << totalCost << " tk" << endl;
    cout << "\nItems taken:\n";
    for (int i = 0; i < n; i++) {
        if (quantities[i] > 0.0) {
            cout << items[i].name << ": " << (double)quantities[i] << " kg\n";
        }
    }

    return 0;
}
